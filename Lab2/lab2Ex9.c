#include <stdio.h>
#include<stdlib.h>
#define valor 10;


void alterar_valor(float*ponto)
{
  *ponto = *ponto*valor;  
  
  return;
}

int main()
{
  float num;
  printf("Digite um numero: ");
  scanf("%f", &num);  
     
  printf("O numero digitado foi: %f \n",num);  
  
    
  alterar_valor(&num);  
  printf("Agora o numero vale: %f \n",num);  
  return 0;
}