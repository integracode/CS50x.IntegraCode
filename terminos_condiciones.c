#include <stdio.h>
#include <cs50.h>

//Aceptar o Rechazar los terminos y condiciones

int main(void){
    printf("Estos son los terminos y condiciones...");
    char respuesta = get_char("Estás de acuerdo? Y/N\n");

    if(respuesta == 'y' || respuesta == 'Y'){
        printf("Terminos aceptados.");
    }else if(respuesta == 'n' || respuesta == 'N'){
        printf("Terminos rechazados.");
    }else{
         printf("Opcion invalida.");
    }

}
