#include<stdio.h>
#include<math.h>
int main(){

    int bits[4];
    int i;
    int n0,n1,n2,n3;

    n0=0;
    n1=n2=n3=n0;

    scanf("%d",&bits[0]);
    scanf("%d",&bits[1]);
    scanf("%d",&bits[2]);
    scanf("%d",&bits[3]);

    for ( i=0; i < 4; i++){
        printf(" \n%d",bits[i]);
    }

    if ( bits[0]==1){
        n0=pow(2,3);
        }

    if ( bits[1]==1){
        n1=pow(2,2);
        }

    if ( bits[2]==1){
        n2=pow(2,1);
        }

    if ( bits[3]==1){
        n3=pow(2,0);
    }


    int decimal = n0+n1+n2+n3;

    printf("%d\n", decimal);

    return 0;
}
