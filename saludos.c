#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string nombre=get_string("¿Cuál es tu nombre?\n");
    string apellido = get_string("¿Cuál es tu apellido?\n");

    printf("¡Hola, %s %s!\n", nombre, apellido);


}