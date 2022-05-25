#include<stdio.h>
#include<stdlib.h>

struct cordenadas{
        int *x,*y;
    }vet[];


int main()
{   
    int i,n;
    

    printf("Quantos pontos deseja digitar:");
    scanf("%d",&n);

    
    for(i=0;i<n;i++){
        printf("Entre com a coordenada x do ponto:\n ");
        scanf("%d",&vet[i]);
        printf("Entre com a coordenada Y do ponto:\n ");
        scanf("%d",&vet[i]);
        
    }
    for ( i = 0; i <n; i++)
        {
            printf("%d",vet[i]);
    }
    
    return 0;

}
