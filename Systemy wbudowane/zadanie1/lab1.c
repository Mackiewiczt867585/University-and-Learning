#include <p24fj128ga010.h>

//Konfiguracja dla Explorer 16 z progr. icd2
_CONFIG1(JTAGEN_OFF & GCP_OFF & GWRP_OFF & BKBUG_OFF & COE_OFF & FWDTEN_OFF)
_CONFIG2(FCKSM_CSDCMD & OSCIOFNC_ON & POSCMOD_HS & FNOSC_PRI)

#define SCALE 308L

int gray_encode(int n){
	return n^(n>>1);
}

unsigned char bin2bcd (unsigned char BinaryNumber){
	return ((BinaryNumber / 10) << 4) | (BinaryNumber % 10);
}

void dec_to_bin(int *bin, int dec, int size){
    int i;
	for(i=size-1;i>=0;i--){
        bin[i]=(dec&1);
        dec=dec>>1;
    }
}
 
int k_bit_of_number(int number, int k_bit){
    return (number>>k_bit-1)&1;
}


int prng(int seed,int power){
    if(seed>0){
        int first_seed=seed;
        int second_seed=seed;
		int i;
        for(i=0;i<power;i++){
            int oldest_bit = ((k_bit_of_number(first_seed,1)^k_bit_of_number(first_seed,2))^k_bit_of_number(first_seed,5))^k_bit_of_number(first_seed,6);
            second_seed=first_seed>>1;
            if(oldest_bit==1){
                second_seed=second_seed|32;
            }
            first_seed=second_seed;
        }
        return second_seed;
    }
    return 0;
}


int prng_linear(int seed){
    int new_seed=seed;
    new_seed = prng(new_seed,1);
    return new_seed;
}


int main(void){
unsigned long i;
unsigned char display=0;
unsigned char bcd=0;
int grade=8;
int gray=0;
int direction=1;
int shifts;
int base;
int move; 
int count;
int seed=1;
//inicjalizacja
 PORTA=0x0000;
 TRISA=0xFF00;
 TRISD=0xFFFF;
 
//niekoÅ?czÄ?ca siÄ? pÄ?tla 
again:

	Nop();
	PORTA=(unsigned int) display;

	switch (grade) {

	case 0:
		display=0;
		while(1){
		PORTA=(unsigned int) display;
		for(i=500L*SCALE;i>0;i--) Nop();
		if (PORTDbits.RD13 == 0){
			grade=grade+1;
			break;
		}
		if (PORTDbits.RD6 == 0){
			grade=8;
			break;
		}
	   	display=display+1;
		}

	case 1:
		display=255;
		while(1){
		PORTA=(unsigned int) display;
		for(i=500L*SCALE;i>0;i--) Nop();
		if (PORTDbits.RD13 == 0){
			grade=grade+1;
			break;
		}
		if (PORTDbits.RD6 == 0){
			grade=grade-1;
			break;
		}
	   	display=display-1;
		}

	case 2:
		gray = 0;
		while(1){
		PORTA=(unsigned int) display;
		for(i=500L*SCALE;i>0;i--) Nop();
		if (PORTDbits.RD13 == 0){
			grade=grade+1;
			break;
		}
		if (PORTDbits.RD6 == 0){
			grade=grade-1;
			break;
		}	
	   	display = gray_encode(gray);
		gray = gray + 1;
		if(gray == 255) gray=0;
		}

	case 3:
		gray = 255;
		while(1){
		PORTA=(unsigned int) display;
		for(i=500L*SCALE;i>0;i--) Nop();
		if (PORTDbits.RD13 == 0){
			grade=grade+1;
			break;
		}	
		if (PORTDbits.RD6 == 0){
			grade=grade-1;
			break;
		}
	   	display = gray_encode(gray);
		gray = gray - 1;
		if(gray == 0) gray=255;
		}

	case 4:
		bcd=0;
		while(1){
		PORTA=(unsigned int) display;
		for(i=500L*SCALE;i>0;i--) Nop();
		if (PORTDbits.RD13 == 0){
			grade=grade+1;
			break;
		}
		if (PORTDbits.RD6 == 0){
			grade=grade-1;
			break;
		}
		display = bin2bcd(bcd);
		bcd = bcd + 1;
		if(bcd==99) bcd=0;
		}
		
	case 5:
		bcd=99;
		while(1){
		PORTA=(unsigned int) display;
		for(i=500L*SCALE;i>0;i--) Nop();
		if (PORTDbits.RD13 == 0){
			grade=grade+1;
			break;
		}
		if (PORTDbits.RD6 == 0){
			grade=grade-1;
			break;
		}
		display = bin2bcd(bcd);
		bcd = bcd - 1;
		if(bcd==0) bcd = 99;
		}
	
	case 6:
		gray=7;
		direction=1;
		while(1){
		PORTA=(unsigned int) display;
		for(i=500L*SCALE;i>0;i--) Nop();
		if (PORTDbits.RD13 == 0){
			grade=grade+1;
			break;
		}
		if (PORTDbits.RD6 == 0){
			grade=grade-1;
			break;
		}
		if(direction==1){ 
			display=gray;
			gray=gray*2;
		}
		if(direction==0){
			display=gray;
			gray=gray/2;		
		}			
		if(gray==224) direction=0;
		if(gray==7) direction=1;
		}

	case 7:
		shifts=8;
		base=0;
		move=0;
		count=1;
		while(1){
		PORTA=(unsigned int) display;
		for(i=500L*SCALE;i>0;i--) Nop();
		if (PORTDbits.RD13 == 0){
			grade=grade+1;
			break;
		}
		if (PORTDbits.RD6 == 0){
			grade=grade-1;
			break;
		}

		if(move==0) move=1;
		else move=move<<1;

		shifts=shifts-1;
		display=base+move;
		
		if(shifts==0){
		base=base+move;
		move=0;
		
		shifts=8-count;
		count=count+1;
		}

		if(base==255){
		base=0;
		shifts=8;
		count=1;
		}

		}

	case 8:
		base=0;
		while(1){
		PORTA=(unsigned int) display;
		for(i=500L*SCALE;i>0;i--) Nop();
		if (PORTDbits.RD13 == 0){
			grade=0;
			break;
		}
		if (PORTDbits.RD6 == 0){
			grade=grade-1;
			break;
		}
		display=prng_linear(seed);
		seed=prng_linear(seed);
		}
}
	goto again;	
}