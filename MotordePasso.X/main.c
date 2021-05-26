#include "config.h"
#include "stepmotor.h"
#include "delay.h"



void main ( void )
{
    stepmotor_init ( 100 );
    delay( 3000 );
    
    while ( 1 )
    {
         stepmotor ( CW, 90, 100 );
        delay(3000);
         stepmotor ( CW, 180, 20 );
        delay(3000);
         stepmotor ( CW, 720, 20 );
        delay(3000);
    }
}