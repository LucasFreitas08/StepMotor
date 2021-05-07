#include "config.h"
#include <xc.h>
void delay ( unsigned int t )
{
    while (t)
    {
        __delay_ms( 1 );
        --t;
    }
}