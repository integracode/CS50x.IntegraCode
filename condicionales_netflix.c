/*
Ayuda a Netflix a procesar sus pagos de forma más efectiva. Escribe un programa
que le pregunte al usuario si quiere comprar la suscripción básica (10 USD) o
Premium (20 USD). El programa le debe indicar que digite 1 para elegir “Básica” y 2
para elegir “Premium”. Después, el programa le debe preguntar al usuario si tiene el
número del cupón de descuento secreto para usuarios seleccionados. El código del
cupón es “4743”. En caso de que el usuario lo tenga y lo digite correctamente,
descontará al usuario 2 dólares. En caso contrario, imprimir en pantalla: “El cupón es
incorrecto. No tienes descuento. El precio que debes pagar es X”, siendo X el costo
original.

*/
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Gracias por suscribirte a Netflix\n");
    int respuesta = get_int("¿Qué suscripción quieres? (Digita 1 para la básica (10 USD) o 2 para la Premium (20 USD)) \n");
    int costo=0;

    if (respuesta == 1) {
        costo = 10;

    }
    if else (respuesta==2)
    {
        costo = 20;
    }

    char respuesta2 = get_char("¿Tienes un código de descuento? (Escribe S para Si y N para No) \n");
    if (respuesta2 == 'S')
    {
        int respuesta3 = get_int("Digita el código del cupón de descuento\n");
        if (respuesta3==4743)
        {
            costo = costo-2;
            printf("Cupón válido. Con el descuento aplicado, solo debes pagar %d USD \n", (costo));
        }
        else {
            printf("Cupón inválido. Debes pagar %d USD \n", costo);
        }
    }
    if else(respuesta2=='N') {
        printf("No tienes descuento por no tener cupón. Debes pagar %d USD \n", costo);
    }


}