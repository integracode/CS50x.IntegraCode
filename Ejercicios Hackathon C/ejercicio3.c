/*
3. Crea un programa que ayude a actualizar los precios del menú de un restaurante
de pizzas. El restaurante vende pizzas de tipo Margarita, Peperoni, Mexicana
y Vegana. El programa le debe mostrar al usuario el menú con los precios actuales
y luego preguntar el precio de cada una de estas pizzas y al final mostrar
el menú actualizado.
Si el precio ingresado es menor a 0 se debe mostrar un error al usuario y finalizar
el programa sin mostrar el menú.
El programa se debe ver así:
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float margarita = 0;
    float pepperoni = 0;
    float mexicana = 0;
    float vegana = 0;

    printf("\n---------MENÚ---------\n");
    printf("PIZZAS:\n");
    printf("Margarita: $ %.2f \n", margarita);
    printf("Pepperoni: $ %.2f \n", pepperoni);
    printf("Mexicana: $ %.2f \n", mexicana);
    printf("Vegana: $ %.2f \n", vegana);
    printf("\n-----------------------\n");

    margarita = get_float("Ingrese el precio de la Pizza Maragrita:\n");

    pepperoni = get_float("Ingrese el precio de la Pizza de Pepperoni:\n");

    mexicana = get_float("Ingrese el precio de la Pizza Mexicana:\n");

    vegana = get_float("Ingrese el precio de la Pizza Vegana:\n");
    
    if (margarita < 0 || pepperoni < 0 || mexicana < 0 || vegana < 0)
    {
        printf("Error, ingrese un precio mayor a 0.\n");
    }
    else
    {
        printf("\n---------MENÚ---------\n");
        printf("PIZZAS:\n");
        printf("Margarita: $ %.2f \n", margarita);
        printf("Pepperoni: $ %.2f \n", pepperoni);
        printf("Mexicana: $ %.2f \n", mexicana);
        printf("Vegana: $ %.2f \n", vegana);
        printf("\n-----------------------\n");
    }
}