#include <stdio.h>
#include <math.h>

int main()
{
    float peso;
    float altura;
    float imc;


    printf("Digite o seu peso: \n");
    scanf("%f", &peso);                         //entrada do dado peso
    printf("Digite a sua Altura: \n");
    scanf("%f", &altura);                       // entrada do dado altura

    imc= peso/ pow (altura,2);                  // formula para calcula o IMC

    if  ( imc < 18.5){
        printf("IMC = %0.2f           Magreza", imc);
    }
   else if( 18.5>= imc < 25){
        printf("IMC = %0.2f           Saudavel", imc);

   }

   else if( 25 >= imc < 30){
        printf("IMC = %0.2f           Sobrepeso", imc);

   }

   else if(30 >=imc <34.9){
        printf("IMC = %0.2f           Obesidade Grau 1", imc);

    }
    else if(35 >=imc <39.9){
        printf("IMC = %0.2f           Obesidade Grau 2(severa)", imc);

    }
    else if(imc > 40.0){
        printf("IMC = %0.2f           Obesidade Grau 3(morbida)", imc);

    }
     return 0;

}

