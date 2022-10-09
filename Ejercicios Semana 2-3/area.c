/*
Escribe un programa que ayude a calcular el área en centímetros de un rectángulo y
muestre el resultado en pantalla sabiendo que area = base * altura

-Entrada/Input: base (double), altura (double)
-Logica: area = base*altura
-Salida/Output: area (double)

*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{

    double base = get_double("Ingrese la base del rectángulo en centímetros. \n");
    double altura = get_double("Ingrese la altura del rectángulo en centímetros. \n");
    area = base*altura;
    printf("El área del rectángulo es: %lf centímetros\n", area);

}


