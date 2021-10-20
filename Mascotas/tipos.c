#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include "mascotas.h"
#include "tipos.h"

int cargarDescripcionTipo(eTipo tipos[], int tam, int idMascota, char descripcion[]){
    int todoOk=0;

    if(tipos!=NULL && tam>0 && descripcion!=NULL){
        for(int i =0; i<tam; i++){
            if(tipos[i].id == idMascota){
                strcpy(descripcion, tipos[i].descripcion);
                break;
            }
        }
        todoOk=1;
    }


return todoOk;
}

int mostrarTipos(eTipo tipos[], int tam){
int todoOk=0;
if(tipos!=NULL && tam>0){

        printf("***************************************\n");
        printf("*              TIPOS                  *\n");
        printf("***************************************\n\n");

        printf("Id             Tipos                  *\n");
        printf("***************************************\n");
        for(int i =0; i<tam; i++){
            printf("%d      %10s\n", tipos[i].id, tipos[i].descripcion);
        }

        todoOk=1;
}

return todoOk;

}


