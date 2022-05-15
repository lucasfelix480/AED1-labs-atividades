#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    char nome_min[100];
   
    int i;
    gets(nome_min);

    for (i=0;nome_min[i] != '\0';i++){
        if(nome_min[i]>= 97 && nome_min[i]<= 122){
            nome_min[i]= nome_min[i]-32;
        }
    }
    printf("%s",nome_min);

    
    return 0;
}
