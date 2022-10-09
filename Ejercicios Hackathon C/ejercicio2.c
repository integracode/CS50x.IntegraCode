/*
2. Crea un programa que ayude a determinar los bonos de Navidad que se le darán
a los empleados dependiendo de la antiguedad. El programa le deberá preguntar
al usuario cuántos años lleva laborando en la empresa. Si lleva laborando
10 o más años, el bono es de 2000 USD. Si lleva laborando entre 5 y 9 años, el bono
es de 1500 USD. Si lleva laborando 4 años o menos, no le corresponde
ningun bono. El programa debe verse así:
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int anios = get_int("¿Cuantos años lleva laborando?\n");

    if (anios >= 10)
    {
        printf("Tu bono es de 2000 USD\n");
    }
    else if (anios >= 5 && anios <= 9)
    {
        printf("Tu bono es de 1500 USD.\n");
    }
    else if (anios <= 4)
    {
        printf("No te corresponde ningun bono.\n");
    }
}