/*
Escribe un programa que responda a un usuario
que quiere entrar a un bar. Si el usuario es menor de 18 años,
imprimir un mensaje que diga “Entrada denegada por ser menor de edad.
Volver en x años”  (en donde x será el número de años que le faltan para cumplir los 18 años.
Si el usuario tiene 18 años o más, imprimir un mensaje que diga: “Entrada permitida”.

Entradas: Edad (int)

Salidas:
-mensaje de entrada denegada: faltante (int)
-mensaje de entrada permitida

*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int years = 0;

    printf("Gracias por visitarnos. Antes de entrar, necesitamos asegurarnos que seas mayor de edad. \n");
    int edad = get_int("¿Qué edad tienes? \n");
    if(edad>=18)
    {
        printf("Entrada permitida. \n");
    }
    else
    {
        years = 18 - edad;
        printf("Entrada denegada. Vuelve en %d años. \n", years);
    }
}