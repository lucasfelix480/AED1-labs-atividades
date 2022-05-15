#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    int i;
    float valores[5];
    float x,s;

    for(i=0;i<5;i++){
        scanf("%f",&valores[i]);
    
    }

    for (i =0;i<5;i++){
        x=x+valores[i];
    }
    x=x/5;
    
   for (i =0;i<5;i++)
    {
        s=s+pow(valores[i]-x,2);
    }
    s=sqrt(s/(5-1));

    printf("%f  %f", x,s);
    

    return 0;

}
