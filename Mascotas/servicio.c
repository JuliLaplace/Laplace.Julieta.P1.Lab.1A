#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include"servicio.h"

int cargarDescripcionServicio(eServicio servicios[], int tam, int idMascota, char descripcion[]){
    int todoOk=0;

    if(servicios!=NULL && tam>0 && descripcion!=NULL){
        for(int i =0; i<tam; i++){
            if(servicios[i].id == idMascota){
                strcpy(descripcion, servicios[i].descripcion);
                break;
            }
        }
        todoOk=1;
    }


return todoOk;
}

int mostrarServicios(eServicio servicios[], int tam){
int todoOk=0;
if(servicios!=NULL && tam>0){
        printf("**************************************\n");
        printf("*              SERVICIOS             *\n");
        printf("**************************************\n\n");
        printf("Id           Servicio       Precio   *\n");
        printf("***************************************\n");

        for(int i =0; i<tam; i++){
            printf("%d      %10s    %.2f\n", servicios[i].id, servicios[i].descripcion, servicios[i].precio);
        }

        todoOk=1;
}

return todoOk;

}


