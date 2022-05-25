#include<stdio.h>

int main()
{
    
    char nome[20]="Jose Augusto";

    char *p;
    
    int i;

    p=&nome;

    for (i=0; i < 20; i++){
        printf("%c",*p);
        p++;

    }
    
    



    return 0;
}
