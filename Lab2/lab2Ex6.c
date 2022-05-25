#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *vetor;
    int i,n;
    int par=0;
    int imp=0;

    printf("digite qual o tamanho do vetor: \n");
    scanf("%d",&n);

    vetor = (int*) malloc(n*sizeof(int));

    for ( i = 0; i < n; i++)
    {
        printf("digite os numoros:\n");
        scanf("%d",&vetor[i]);
       
    }
    
    for ( i = 0; i < n; i++)
    {
        if (vetor[i]%2==0)
        {   
            par++;
        }
        if (vetor[i]%2==1)
        {
            imp++;
        }

    }
    printf("sao %d pares dos %d inteiros \n",par,n);
    printf("sao %d impares dos %d inteiros\n",imp,n);

    free(vetor);


    return 0;
}