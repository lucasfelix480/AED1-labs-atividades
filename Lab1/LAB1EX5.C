#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n,i,j;
   int m=0;

   scanf("%d",&n);

   for( i= 1 ;i <=n;i++){
       for(j=1;j<=i;j++){
        m++;
        printf("%d ",m);
   }
        printf("\n");
   }
    return 0;
}
