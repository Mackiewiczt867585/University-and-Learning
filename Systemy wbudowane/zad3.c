// CONFIG1H
#pragma config OSC = HSPLL      // Oscillator Selection bits (HS oscillator, PLL enabled (Clock Frequency = 4 x FOSC1))
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor disabled)
#pragma config IESO = OFF       // Internal/External Oscillator Switchover bit (Oscillator Switchover mode disabled)

// CONFIG2L
#pragma config PWRT = ON        // Power-up Timer Enable bit (PWRT enabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bits (Brown-out Reset disabled in hardware and software)
#pragma config BORV = 3         // Brown Out Reset Voltage bits (Minimum setting)

// CONFIG2H
#pragma config WDT = OFF        // Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))
#pragma config WDTPS = 32768    // Watchdog Timer Postscale Select bits (1:32768)

// CONFIG3H
#pragma config CCP2MX = PORTC   // CCP2 MUX bit (CCP2 input/output is multiplexed with RC1)
#pragma config PBADEN = OFF     // PORTB A/D Enable bit (PORTB<4:0> pins are configured as digital I/O on Reset)
#pragma config LPT1OSC = OFF    // Low-Power Timer1 Oscillator Enable bit (Timer1 configured for higher power operation)
#pragma config MCLRE = ON       // MCLR Pin Enable bit (MCLR pin enabled; RE3 input pin disabled)

// CONFIG4L
#pragma config STVREN = OFF     // Stack Full/Underflow Reset Enable bit (Stack full/underflow will not cause Reset)
#pragma config LVP = OFF        // Single-Supply ICSP Enable bit (Single-Supply ICSP disabled)
#pragma config XINST = OFF      // Extended Instruction Set Enable bit (Instruction set extension and Indexed Addressing mode disabled (Legacy mode))

// CONFIG5L
#pragma config CP0 = OFF        // Code Protection bit (Block 0 (000800-003FFFh) not code-protected)
#pragma config CP1 = OFF        // Code Protection bit (Block 1 (004000-007FFFh) not code-protected)
#pragma config CP2 = OFF        // Code Protection bit (Block 2 (008000-00BFFFh) not code-protected)
#pragma config CP3 = OFF        // Code Protection bit (Block 3 (00C000-00FFFFh) not code-protected)

// CONFIG5H
#pragma config CPB = OFF        // Boot Block Code Protection bit (Boot block (000000-0007FFh) not code-protected)
#pragma config CPD = OFF        // Data EEPROM Code Protection bit (Data EEPROM not code-protected)

// CONFIG6L
#pragma config WRT0 = OFF       // Write Protection bit (Block 0 (000800-003FFFh) not write-protected)
#pragma config WRT1 = OFF       // Write Protection bit (Block 1 (004000-007FFFh) not write-protected)
#pragma config WRT2 = OFF       // Write Protection bit (Block 2 (008000-00BFFFh) not write-protected)
#pragma config WRT3 = OFF       // Write Protection bit (Block 3 (00C000-00FFFFh) not write-protected)

// CONFIG6H
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration registers (300000-3000FFh) not write-protected)
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot Block (000000-0007FFh) not write-protected)
#pragma config WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM not write-protected)

// CONFIG7L
#pragma config EBTR0 = OFF      // Table Read Protection bit (Block 0 (000800-003FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR1 = OFF      // Table Read Protection bit (Block 1 (004000-007FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR2 = OFF      // Table Read Protection bit (Block 2 (008000-00BFFFh) not protected from table reads executed in other blocks)
#pragma config EBTR3 = OFF      // Table Read Protection bit (Block 3 (00C000-00FFFFh) not protected from table reads executed in other blocks)

// CONFIG7H
#pragma config EBTRB = OFF

#include <xc.h>

#define LENA  PORTEbits.RE1
#define LDAT  PORTEbits.RE2
#define LPORT PORTD

#define L_ON	0x0F
#define L_OFF	0x08
#define L_CLR	0x01
#define L_L1	0x80
#define L_L2	0xC0
#define L_CR	0x0F		
#define L_NCR	0x0C	

#define L_CFG   0x38

void delay(unsigned int ms)
{
    unsigned int i;
    unsigned char j;
    
 for (i =0; i< ms; i++)
 {
 
  for (j =0 ; j < 200; j++)
   {
      Nop();
      Nop();
      Nop();
      Nop();
      Nop();
   }
 }
}

unsigned int adc(unsigned char kanal)
{
    switch(kanal)
    {
        case 0: ADCON0=0x01; break; //P1
        case 1: ADCON0=0x05; break; //P2
        case 2: ADCON0=0x09; break; 
    }
    
    ADCON0bits.GO=1;
    while(ADCON0bits.GO == 1);

   return ((((unsigned int)ADRESH)<<2)|(ADRESL>>6));
}

void lcd_wr(unsigned char val)
{
  LPORT=val;
}

void lcd_cmd(unsigned char val)
{
	LENA=1;
        lcd_wr(val);
        LDAT=0;
        //delay(3);
        LENA=0;
        //delay(3);
	LENA=1;
}
 
void lcd_dat(unsigned char val)
{
	LENA=1;
        lcd_wr(val);
        LDAT=1;
        //delay(3);
        LENA=0;
        //delay(3);
	LENA=1;
}

void lcd_init(void)
{
	LENA=0;
	LDAT=0;
	delay(20);
	LENA=1;
	
	lcd_cmd(L_CFG);
	delay(5);
	lcd_cmd(L_CFG);
    delay(1);
	lcd_cmd(L_CFG); //configura
	lcd_cmd(L_OFF);
	lcd_cmd(L_ON); //liga
	lcd_cmd(L_CLR); //limpa
	lcd_cmd(L_CFG); //configura
    lcd_cmd(L_L1);
}

void lcd_str(const char* str)
{
 unsigned char i=0;
  
 while(str[i] != 0 )
 {
   lcd_dat(str[i]);
   i++;
 }  
}

void CreateCustomCharacter (unsigned char *Pattern, const char Location)
{ 
int i=0; 
lcd_cmd (0x40+(Location*8));     //Send the Address of CGRAM
for (i=0; i<8; i++) lcd_dat(Pattern[i]);         //Pass the bytes of pattern on LCD 
}

unsigned char steaming_bun_1[] = { 0x00, 0x09, 0x12, 0x09, 0x00, 0x0E, 0x11, 0x1F };
unsigned char eating_face[] = { 0x0E, 0x11, 0x15, 0x11, 0x12, 0x14, 0x12, 0x0F };
unsigned char thumb_up[] = { 0x18, 0x18, 0x18, 0x18, 0x1F, 0x1F, 0x1F, 0x1F };
unsigned char letter_h[] = { 0x11, 0x11, 0x11, 0x1F, 0x11, 0x11, 0x11, 0x11 };
unsigned char letter_o[] = { 0x1F, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1F };
unsigned char letter_t[] = { 0x1F, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04 };
unsigned char finger_pointing_right[] = { 0x00, 0x10, 0x10, 0x10, 0x1F, 0x1C, 0x1C, 0x00 };
unsigned char question_mark[] = { 0x0E, 0x11, 0x01, 0x02, 0x04, 0x00, 0x04, 0x04 };
unsigned char exclamation_mark[] = { 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 0x04 };
unsigned char smiling_face[] = { 0x00, 0x1B, 0x1B, 0x00, 0x11, 0x1F, 0x0E, 0x00 };

void main(void) {
    
    //Inicjalizacja konwertera analogowo cyfrowego
    ADCON0=0x01;
    ADCON1=0x0B;
    ADCON2=0x01;
    
    TRISA=0xC3;
    TRISB=0x3F;   
    TRISC=0x01;
    TRISD=0x00;
    TRISE=0x00;
    
    lcd_init(); //Inicjalizacja wy?wietlacza
    lcd_cmd(L_CLR); //Czyszczenie wy?wietlacza
    
    CreateCustomCharacter(steaming_bun_1, 0);
    CreateCustomCharacter(eating_face, 1);
    CreateCustomCharacter(thumb_up, 2);
    CreateCustomCharacter(letter_h, 3);
    CreateCustomCharacter(letter_o, 4);
    CreateCustomCharacter(letter_t, 5);
    CreateCustomCharacter(finger_pointing_right, 6);
    
    while(1)
    {

       lcd_cmd(L_CLR);
       
       lcd_cmd(L_L1);
       lcd_str("GORACE    ");
       lcd_dat(3);
       lcd_str(" ");
       delay(120);
       lcd_dat(4);
       lcd_str(" ");
       delay(120);
       lcd_dat(5);
       lcd_str(" ");
       delay(120);
       lcd_cmd(L_L2);
       lcd_str("BULECZKI ");
       delay(120);
       lcd_dat(0);
       lcd_str(" ");
       delay(120);
       lcd_dat(0);
       lcd_str(" ");
       delay(120);
       lcd_dat(0);
       lcd_str(" ");
       delay(120);
       lcd_dat(0);
       
       delay(240);
       
       lcd_cmd(L_CLR);
       lcd_cmd(L_L1);
       lcd_str("W TWOJEJ ");
       delay(120);
       lcd_dat(6);
       lcd_str(" ");
       delay(120);
       lcd_dat(6);
       lcd_str(" ");
       delay(120);
       lcd_dat(6);
       lcd_str(" ");
       delay(120);
       lcd_cmd(L_L2);
       lcd_str("OKOLICY ");
       delay(120);
       lcd_dat(1);
       delay(120);
       lcd_dat(0);
       delay(120);
       lcd_str("  ");
       lcd_dat(2);
       delay(120);
       lcd_str(" ");
       lcd_dat(2);
       delay(120);
       
       delay(240);
       
       CreateCustomCharacter(question_mark, 0);
       CreateCustomCharacter(exclamation_mark, 1);
       CreateCustomCharacter(smiling_face, 2);
       
       lcd_cmd(L_CLR);
       lcd_cmd(L_L1);
       lcd_str("SPRAWDZ ");
       delay(120);
       lcd_dat(0);
       lcd_str(" ");
       delay(120);
       lcd_dat(1);
       lcd_str(" ");
       delay(120);
       lcd_dat(0);
       lcd_str(" ");
       delay(120);
       lcd_dat(1);
       lcd_str(" ");
       delay(120);
       lcd_cmd(L_L2);
       lcd_str("GDZIE  ");
       delay(120);
       lcd_dat(2);
       lcd_str(" ");
       delay(120);
       lcd_dat(2);
       lcd_str(" ");
       delay(120);
       lcd_dat(2);
       lcd_str(" ");
       delay(120);
       lcd_dat(2);
       lcd_str(" ");
       delay(120);
       lcd_dat(2);
       lcd_str(" ");
       delay(120);
       
       delay(240);
       
    }
    
    return;
}
