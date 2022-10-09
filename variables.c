/*
int	(4 bytes) | %d for printing
double	(8 bytes) | %lf for printing
float	(4 bytes) | %f for printing
char	(1 byte)  | %c for printing
*/

#include <stdio.h> //libreria para imprimir cosas en mi terminal
#include <cs50.h> //libreria desarrollada por harvard para mis ejercicios


int main(void)
{
    int edad = 22; //declaro una variable llamada edad de tipo entero y le asigno mi edad
    printf("La edad que tengo es: %d \n", edad); //combino texto y la variable edad

    edad = 30; //Actualizo el valor de edad
    printf("Mi edad actualizada es: %d \n", edad); //Imprimo el valor actualizado

}