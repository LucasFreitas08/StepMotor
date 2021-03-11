
#include <xc.h>
#include "config.h"
#include "delay.h"

#define VERDE               PORTDbits.RD5
#define VERMELHO            PORTDbits.RD7
#define AMARELO             PORTDbits.RD6
#define VERDEPED            PORTDbits.RD2
#define VERMELHOPED         PORTDbits.RD3
#define BOTAO               PORTDbits.RD0

void semaforo_init ( void )
{
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD0 = 1;
    PORTDbits.RD7 = 0;
    PORTDbits.RD7 = 0;
    PORTDbits.RD7 = 0;
    PORTDbits.RD7 = 0;
    PORTDbits.RD7 = 0;
    
}

void verde ( int x )
{
    VERDE = x;
}

void amarelo ( int x )
{
    AMARELO = x;
}

void vermelho ( int x )
{
    VERMELHO = x;
}

void verdeped ( int x )
{
    VERDEPED = x;
}

void vermelhoped ( int x )
{
    VERMELHOPED = x;
}

int botao ( void )
{
    return ( BOTAO );
}