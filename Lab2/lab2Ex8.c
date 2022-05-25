#include <stdio.h>
#include<stdlib.h>

float calc_area(float p1,float p2){
    return (p1*p2);
}

int main(){

    float b,h,area;

    printf("Digite o valor da base e altura do retangulo \n");
    scanf("%f %f", &b,&h);

    area = calc_area(b,h);
    printf("A area do seu retangulo eh:%.2f",area);


    return 0;

}