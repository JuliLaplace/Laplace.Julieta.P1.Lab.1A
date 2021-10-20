
#include"trabajo.h"



int inicializarTrabajos(eTrabajo lista[], int tam){
    int inicializarOk=0;
    if(lista!=NULL && tam>0){
        for (int i=0; i<tam; i++){
            lista[i].isEmpty=1;
        }
        inicializarOk=1;
    }
    return inicializarOk;
}

int altaTrabajo(eTrabajo lista[], int tam, eMascota mascotas[], int tamM, eColor colores[], int tamC, eTipo tipos[], int tamT, eServicio servicios[], int tamS, int* pId){
    int altaOk=0;
    eFecha auxFecha;
    eTrabajo auxTrabajo;
    int indiceTrabajo;
    int indiceMascota;
    int flagAlta=0;


    if(lista!=NULL && tam>0 && pId!=NULL && colores!=NULL && tamC>0 && mascotas!=NULL && tam>0 && tipos!=NULL && tamT>0 && servicios!=NULL && tamS>0){
    system ("cls");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("                                   Alta Trabajos\n");
    printf("-------------------------------------------------------------------------------------------\n");
        indiceTrabajo = buscarLibreTrabajo(lista, tam);

        if(indiceTrabajo==-1){
            printf("No hay lugar disponible.\n");

        }else{
                    //ID
                     auxTrabajo.id = *pId;
                    (*pId)++;

                    printf("\n");
                    mostrarMascotas(mascotas, tam, colores, tamC, tipos, tamT);
                    printf("\nIngrese ID de mascota a ingresar: ");
                    scanf("%d", &auxTrabajo.idMascota);
                    while(!validarIdMascotas(mascotas, tam, auxTrabajo.idMascota)) {
                        printf("ID incorrecto. Ingrese ID valido: ");
                        scanf("%d", &auxTrabajo.idMascota);
                    }


                    indiceMascota = buscarMascota(mascotas, tam, auxTrabajo.idMascota);

                    if(indiceMascota==-1){
                        printf("El ID ingresado no existe. ID ingresado: %d\n", auxTrabajo.idMascota);
                        flagAlta=1;
                         printf("-------------------------------------------------------------------------------------------\n\n");
                    } else {
                        printf("El id ingresado es el siguiente: %d. \n", auxTrabajo.idMascota);
                        printf("Pertenece a: \n");

                        mostrarMascota(mascotas[indiceMascota], colores, tamC, tipos, tamT);
                    }





                    /////////Servicios
                    printf("\n");
                    mostrarServicios(servicios, tamS);
                    printf("\nIngrese ID de servicio a realizar: ");
                    scanf("%d", &auxTrabajo.idServicio);
                    while(!validarServicios(servicios, tamS, auxTrabajo.idServicio)) {
                        printf("ID incorrecto. Ingrese ID valido: ");
                        scanf("%d", &auxTrabajo.idServicio);
                    }


                     //fecha
                    //dia
                    if(utn_getNumero(&auxFecha.dia,"Ingrese dia de realizacion de servicio (1 - 31): ", "Error. ",1,31,5)==0){
                        printf("Dia correctamente cargado.\n");
                        printf("-------------------------------------------------------------------------------------------\n");
                    } else {
                        printf("Error en la carga.\n");
                        flagAlta=1;
                    }
                    //mes
                    if(utn_getNumero(&auxFecha.mes,"Ingrese mes de realizacion de servicio(1-12): ", "Error. ",1,12,5)==0){
                        printf("Mes correctamente cargado.\n");
                        printf("-------------------------------------------------------------------------------------------\n");
                    } else {
                        printf("Error en la carga.\n");
                        flagAlta=1;
                    }
                    //anio
                    if(utn_getNumero(&auxFecha.anio,"Ingrese anio de realizacion de servicio: (desde 2000 a 2021) : ", "Error. ",2000,2021,5)==0){
                        printf("Anio correctamente cargado.\n");
                        printf("-------------------------------------------------------------------------------------------\n");
                    } else {
                        printf("Error en la carga.\n");
                        flagAlta=1;
                    }


                     printf("-------------------------------------------------------------------------------------------\n\n");

                //ID
                if(flagAlta){
                        printf("Error en carga de datos. Vuelva a intentarlo.\n");
                        altaOk=0;
                }else{

                    /*lista[indiceTrabajo].id = *pId; //le asigno el valor establecido en el main
                    (*pId)++; //lo incremento y lo mando al main con el valor cambiado para proximo id*/

                    lista[indiceTrabajo] =auxTrabajo;
                    lista[indiceTrabajo].fecha = auxFecha;
                    lista[indiceTrabajo].isEmpty=0;//cambio a 0 para que sepa que esta ocupado

                    altaOk=1;
                }
            }
        }

    return altaOk;
 }

 int buscarLibreTrabajo(eTrabajo lista[], int tam){
    int indice=-1;
    if(lista!=NULL && tam>0){
        for(int i = 0; i<tam; i++){
            if(lista[i].isEmpty){
                indice=i;
                break;
            }
        }
    }
    return indice;

}


int mostrarTrabajos(eTrabajo trabajos[] , int tamT, eServicio servicios[], int tamS, eMascota mascotas[], int tamM){
    int mostrarTrabajos=0;
    int flag=0;


    if(trabajos!=NULL && tamT>0){
                        printf("-------------------------------------------------------------------------------------------\n");
                        printf("                                  TRABAJOS          \n");
                        printf("-------------------------------------------------------------------------------------------\n");
                        printf("ID Trabajo        Fecha               Servicio             Nombre\n");
                        printf("-------------------------------------------------------------------------------------------\n");
            for(int i = 0; i<tamT; i++){
                    if(trabajos[i].isEmpty==0){
                        mostrarTrabajo(trabajos[i], servicios, tamS, mascotas, tamM);
                        printf("\n");
                        flag=1;
                    }
            }

            if(flag){ //marca que nunca se entro al for, y no hay empleados
                mostrarTrabajos=1;
            }else{
                 printf("No hay trabajos realizados a mascotas que mostrar\n");
                mostrarTrabajos=0;

            }


    }
    return mostrarTrabajos;
}


void mostrarTrabajo(eTrabajo trabajo, eServicio servicio[], int tamS, eMascota mascotas[], int tamM){
    char descripcionServicio[20];
    char descripcionMascota[20];

    cargarDescripcionServicio(servicio, tamS, trabajo.idServicio, descripcionServicio);
    cargarDescripcionMascota(mascotas, tamM, trabajo.idMascota, descripcionMascota);

    printf("%d          %02d/%02d/%d    %15s  %15s\n", trabajo.id, trabajo.fecha.dia, trabajo.fecha.mes, trabajo.fecha.anio, descripcionServicio, descripcionMascota);
}
