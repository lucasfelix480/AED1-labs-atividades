#include<stdio.h>
#include<stdlib.h>
#include<math.h>



typedef struct ponto Ponto;

struct ponto
{
    float x;
    float y;
};


Ponto* gera_pto(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(p));
    if(p == NULL){
        printf("Memoria insuficiente \n");
        exit(1);
    }
    p->x= x;
    p->y = y;
    return p;
}


void set_pto(Ponto* p, float x,float y){
    p->x=x;
    p->y=y;
}


void get_pto(Ponto* p,float* x, float* y){
    *x=p->x;
    *y=p->y;
}
    

void libera_pto(Ponto* p){
    free(p);
}


float distancia_pto(Ponto* p1, Ponto* p2){
    float dx=p2->x - p1->x;
    float dy= p2->y - p1->y;
    return sqrt(dx*dx + dy*dy);
}


