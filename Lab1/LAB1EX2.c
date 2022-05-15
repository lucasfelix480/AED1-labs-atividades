#include<stdio.h>

#include<math.h>

int main(){

    int X1,Y1,X2,Y2;
    float D;

    X2=0;
    Y2=0;

    printf("entre com a coordenada X:\n");
    scanf("%d",&X1);

    printf("entre com a coordenada Y:\n");
    scanf("%d",&Y1);

    D= sqrt( pow(X2 - X1,2)+ pow(Y2- Y1,2));

    printf(" A distancia dos pontos %d,%d para a origem eh: %.1f", X1,Y1, D);

    return 0;

}
