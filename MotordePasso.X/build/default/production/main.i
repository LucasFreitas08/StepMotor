# 1 "main.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:\\Program Files (x86)\\Microchip\\xc8\\v2.00\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "main.c" 2
# 1 "./config.h" 1




#pragma config FOSC = INTRC_NOCLKOUT
#pragma config WDTE = OFF
#pragma config PWRTE = OFF
#pragma config MCLRE = OFF
#pragma config CP = OFF
#pragma config CPD = OFF
#pragma config BOREN = OFF
#pragma config IESO = OFF
#pragma config FCMEN = OFF
#pragma config LVP = OFF


#pragma config BOR4V = BOR40V
#pragma config WRT = OFF
# 1 "main.c" 2

# 1 "./stepmotor.h" 1






void stepmotor_init ( int PulsosPorRevolucao );
void stepmotor ( char sentido, int graus, int t );
# 2 "main.c" 2

# 1 "./delay.h" 1



void delay ( unsigned int t );
# 3 "main.c" 2




void main ( void )
{
    stepmotor_init ( 100 );
    delay( 3000 );

    while ( 1 )
    {
         stepmotor ( 1, 90, 100 );
        delay(3000);
         stepmotor ( 1, 180, 20 );
        delay(3000);
         stepmotor ( 1, 720, 20 );
        delay(3000);
    }
}
