/*
while(condicion)
{
	instrucciones;
}
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //ascendente
    int i = 0;
    while (i<10)
    {
        printf("Contador: %d \n",i);
        i++;
    }

    i = 10;
    while (i>0)
    {
        printf("Contador: %d \n",i);
        i--;
    }
}

//¿como le hariamos para que empiece en 1 y termine en 10?
//¿como le hariamos para que empiece en 10 y termine en 0?