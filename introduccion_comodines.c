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
    int entero = 5;
    float flotante = 3.14;
    double pi = 3.141596;
    char caracter = 'H';
    string cadena = "Hola";

    printf("%d \n", entero);
    printf("%f \n", flotante);
    printf("%lf \n", pi);
    printf("%c \n", caracter);
    printf("%s \n", cadena);

}