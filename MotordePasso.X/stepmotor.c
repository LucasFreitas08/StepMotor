#include <xc.h> 
#include "delay.h"
#include "stepmotor.h" 



int ppr = 16;
char passos[4] = { 0x02, 0x04, 0x01, 0x08 };
char indice = 0;


void stepmotor_init ( int PulsosPorRevolucao )

{
          
            TRISDbits.TRISD0 = 0;
            TRISDbits.TRISD1 = 0;
            TRISDbits.TRISD2 = 0;
            TRISDbits.TRISD3 = 0;
            
            
            PORTDbits.RD0 = 1;
            PORTDbits.RD1 = 0;
            PORTDbits.RD2 = 0;
            PORTDbits.RD3 = 0;
            
            ppr =  PulsosPorRevolucao;

}    


void stepmotor ( char sentido, int graus, int t )

{
int i;
int numpassos;
numpassos = (graus * ppr)/360;



for( i=0; i<numpassos; i++ )
    
{
             PORTD = ((PORTD & 0XF0)| passos [ indice ]);
            indice = ( indice+sentido ) % 4; 
            delay(250);
}   
                    
}                    