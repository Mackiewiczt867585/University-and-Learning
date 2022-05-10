#include <p24fj128ga010.h>

_CONFIG1(JTAGEN_OFF & GCP_OFF & GWRP_OFF & BKBUG_OFF & COE_OFF & FWDTEN_OFF)
_CONFIG2(FCKSM_CSDCMD & OSCIOFNC_ON & POSCMOD_HS & FNOSC_PRI)

#define SCALE 308L

/* numer którym dostajemy siê do czujnika temperatury */

#define TSENS 4
#define TVOLT 5
#define AINPUTS 0xffcf
void ADCinit(int amask)

{
	AD1PCFG = amask;
	AD1CON1 = 0x00e0;
	AD1CSSL = 0;
	AD1CON2 = 0;
	AD1CON3 = 0x1f02;
	AD1CON1bits.ADON = 1;
}

int readADC(int ch)

{
	AD1CHS = ch;
	AD1CON1bits.SAMP = 1;
	while (!AD1CON1bits.DONE);
	return ADC1BUF0;
}


int main(void)
{
	TRISA = 0xFF00;
	TRISD = 0xFFFF;

	unsigned long i;
	unsigned char display = 0;
	int temp;
	unsigned int szybkosc = 500L;
	int counter=0;
	int pot=0;
	int limit = 240;

	PORTA = 0x0000;
	ADCinit(AINPUTS); /*inicjalizacja konwertera AD*/

	display = 0;	

	while (1) {
		
		temp = readADC(TSENS);
		if(temp >= limit){
			display = 1;
			while(1){

				pot = readADC(TVOLT);

				if (PORTDbits.RD6 == 0) {
					counter = 0;
					break;
				}

				if (pot < limit) {
					counter = 0;
					break;
				}	
				
				if (counter > 2) display = 255;	
			
				PORTA =(unsigned int)display;
				for (i = szybkosc * SCALE; i > 0; i--) Nop();
				
				if (counter <= 2) {
				PORTA = 0;
				for (i = 250L * SCALE; i > 0; i--) Nop();
				counter += 1;				
				}	

				
			}	
		}
		else display = 0;
		PORTA =(unsigned int) display;
		for (i = szybkosc * SCALE; i > 0; i--) Nop();
	}

}
