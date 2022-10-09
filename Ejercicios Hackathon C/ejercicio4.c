/*
4. Sabiendo que 1 pie = 0.3048 metros, crea un programa que ayude al usuario a
crear una calculadora que convierta de metros a pies y viceversa. El progama le
 debe presentar dos opciones al usuario
    1. Convertir de metros a pies (teclear número 1 en pantalla)
    2. Convertir de pies a metros (teclear número 2 en pantalla)
Posterior a esto, el programa le debe preguntar al usuario por el valor que
desea convertir. Finalmente, el programa mostrará el valor convertido a la unidad
correspondiente. El programa debe verse así:
 */

#include <stdio.h>
#include <cs50.h>
int main(void)
{

    float resultado = 0;

    printf("\nConvertir de metros a pies (teclear número 1 en pantalla)");
    printf("\nConvertir de pies a metros (teclear número 2 en pantalla)");
    int opcion = get_int("\n");

    if (opcion == 1)
    {
        float metros = get_float("Ingrese la distancia en metros:\n");
        resultado = metros / 0.3048;
        printf("Distancia en Pies: %.3f \n", resultado);
    }
    else
    {
        float pies = get_float("Ingrese la distancia en pies:\n");
        resultado = pies * 0.3048;
        printf("Distancia en Metros: %.3f \n", resultado);
    }
}