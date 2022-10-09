/*
1. Escriba un programa en C para verificar si un número dado es positivo
o negativo. El número 0 se considera neutro.
Ejemplo de cómo se debe ver el resultado en pantalla:
*/

#include <stdio.h>
#include <cs50.h>
int main()
{

    int num = get_int("Ingresa un numero :");

    if (num > 0)
    {
        printf("%d es un numero positivo. \n", num);
    }
    else if (num < 0)
    {
        printf("%d es un numero negativo \n", num);
    }
    else
    {
        printf("%d es un numero neutro. \n", num);
    }
}