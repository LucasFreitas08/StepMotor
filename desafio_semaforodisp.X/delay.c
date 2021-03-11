#include <xc.h>
#include "config.h"
#include "semaforo.h"


void delay ( int t )
{
    while ( t )
    {
        __delay_ms( 1 );
        --t;
    }
}