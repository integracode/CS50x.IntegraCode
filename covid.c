/*
Escribe un programa que le pregunte al usuario su edad y dependiendo de eso, le diga al usuario la fecha asignada para que reciba la vacuna del COVID-19.
Las personas con 60 años o más se vacunarán el 10 de octubre.
Las personas con 40 años y menores de 60 años se vacunarán el 20 de octubre.
El resto de la población aún no tiene fecha asignada.
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int edad = get_int("¿Cuál es tu edad? \n");
    if(edad>=40 && edad<60)
    {
        printf("Te toca vacunarte el 20 de octubre. \n");
    }
    else if(edad>=60)
    {
        printf("Te toca vacunarte el 10 de octubre. \n");
    }
    else
    {
        printf("Aun no tienes una fecha asignada. \n");
    }


}



