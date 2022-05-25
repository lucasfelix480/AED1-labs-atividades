#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *vetor;
    int i,n;

    printf("digite qual o tamanho do vetor: \n");
    scanf("%d",&n);

    vetor = (int*) malloc(i*sizeof(int));

    for ( i = 0; i < n; i++)
    {
        printf("digite os numoros:\n");
        scanf("%d",&vetor[i]);
       
    }
    
    for ( i = 0; i < n; i++)
    {
         printf(" %d", vetor[i] );
    }
    
    free(vetor);

     for ( i = 0; i < n; i++)
    {
         printf(" %d", vetor[i] );
    }
    return 0;




    return 0;
}
