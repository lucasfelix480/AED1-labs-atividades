#include<stdio.h>
#include<stdlib.h>

struct individuo {
int codigo_genetico[10]; // valores binarios aleatorios
int aptidao_abs; // pontencial de cada individuo (0.0 <= aptidao <= 10.0)
int aptidao_relativa; // deve ser calculada em tempo de execução...
};

struct populacao {
struct individuo *pop; // um vetor de N individuos
int tamanho; // tamanho N da população (N = 100)
};


typedef struct populacao populacao;

int main()
{
    populacao nova;
    int i;
    nova.tamanho =100;
    nova.pop[nova.tamanho];

    for (i = 0; i < nova.tamanho; i++)
    {
      
       
    }
    

    
    printf("%d",nova.pop);
    

    
    return 0;





}