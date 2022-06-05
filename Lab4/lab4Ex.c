#include <stdio.h>
#include <stdlib.h>
#include "lab4Ex.h"

int main(){

    Ponto* p = gera_pto(2.0,1.0);
    Ponto* q = gera_pto(3.4,2.1);
    float d = distancia_pto(p,q);

    printf("distancia entre os pontos %f \n",d);
    libera_pto(p);
    libera_pto(q);
    
    return 0;

}