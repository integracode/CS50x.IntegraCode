#include <stdio.h>
#include <cs50.h>

int main(void){
    //suma, resta, multiplicacion y division
    float resultado = 0;
    printf("\nBienvenido a mi calculadora");
    printf("\n[1] suma");
    printf("\n[2] resta");
    printf("\n[3] multiplicacion");
    printf("\n[4] division");
    int opcion =  get_int("\nDigite una opcion: ");
    float numero1 = get_int("\nnumero 1: ");
    float numero2 = get_int("\nnumero 2: ");

    if(opcion == 1){ //suma
         resultado = numero1 + numero2;
         printf("El resultado de %f + %f es %.2f", numero1, numero2, resultado);
    }
    else if(opcion == 2){ //resta
         resultado = numero1 - numero2;
         printf("El resultado de  %f - %f es %.2f", numero1, numero2, resultado);
    }
    else if(opcion == 3){ //multiplicacion
         resultado = numero1 * numero2;
         printf("El resultado de  %f * %f es %.2f", numero1, numero2, resultado);
    }
    else if(opcion == 4){ //division
         resultado = numero1 / numero2;
         printf("El resultado de  %f / %f es %.2f", numero1, numero2, resultado);
    }else{
        printf("Opcion invalida.");
    }
}

