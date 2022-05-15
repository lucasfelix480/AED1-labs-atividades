// Universidade Federal de Uberl�ndia
//Faculdade de Computa��o

#include <stdio.h>
#include <stdlib.h>


int main
()
{
    float j1,p1;
    float j2,p2;
    float j3,p3;
    float T =0;

    float premio;

    scanf("%f %f %f", &j1,&j2,&j3);
    scanf("%f", &premio);

    T=j1+j2+j3;

    p1=(j1/T)*premio;
    p2=(j2/T)*premio;
    p3=(j3/T)*premio;

    printf("O premio de cada jogador eh: \n");
    printf("Jogador 1: %.2f \nJogador 2: %.2f \nJogador 3: %.2f \n", p1,p2,p3);

return 0;
}

//Lucas Tiago Felix Souza 04/02/2022




