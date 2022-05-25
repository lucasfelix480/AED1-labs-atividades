#include<stdio.h>
#include<stdlib.h>

int main()
{
    int vetor[10],i,novo;
   
    
    for(i = 0; i < 10; i++)
    {
    scanf("%d", &vetor[i]);

    }
    for ( i = 9; i >= 0; i--)
    {
       printf("%d",vetor[i]);
       
    }
    

    return 0;
}
