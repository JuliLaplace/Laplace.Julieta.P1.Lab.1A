#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include "colores.h"
int cargarDescripcionColor(eColor colores[], int tam, int idMascota, char descripcion[]){
    int todoOk=0;

    if(colores!=NULL && tam>0 && descripcion!=NULL){
        for(int i =0; i<tam; i++){
            if(colores[i].id == idMascota){
                strcpy(descripcion, colores[i].descripcion);
                break;
            }
        }
        todoOk=1;
    }


return todoOk;
}

int mostrarColores(eColor colores[], int tamC){
int todoOk=0;
if(colores!=NULL && tamC>0){

        printf("***************************************\n");
        printf("*            COLORES                  *\n");
        printf("***************************************\n\n");
        printf("Id             Color                  *\n");
        printf("***************************************\n");
        for(int i =0; i<tamC; i++){
            printf("%d      %10s\n", colores[i].id, colores[i].descripcion);
        }

        todoOk=1;
}

return todoOk;

}

