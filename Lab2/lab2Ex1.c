#include <stdio.h> 


int main(){

    int a = 40;

    int *p;

    p=&a;

    scanf("%d",*p);

    printf("%d \n",&a);
    printf("%d \n",p);



    return 0;





}