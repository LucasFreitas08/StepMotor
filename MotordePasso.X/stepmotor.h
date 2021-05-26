#ifndef STEPMOTOR_H
#define STEPMOTOR_H

#define CW      1
#define CCW    -1

void stepmotor_init ( int PulsosPorRevolucao );
void stepmotor ( char sentido, int graus, int t );


#endif
