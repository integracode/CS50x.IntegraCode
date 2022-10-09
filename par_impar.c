#include <stdio.h>
#include <cs50.h>

//Pedir un numero y decir si es par o impar
int main(void){

    int numero = get_int("Ingresa un numero: \n");
    //si el numero divido por 2 el residuo es 0,
    int residuo = numero % 2;

    if(residuo == 0){
        printf("\nEl numero es par");
    }else{
        printf("\nEl numero es impar");
    }

}
