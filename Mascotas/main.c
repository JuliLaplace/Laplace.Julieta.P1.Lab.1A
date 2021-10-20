#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include "mascotas.h"
#include"colores.h"
#include "tipos.h"
#include"servicio.h"
#include"trabajo.h"
#include"fecha.h"
#include"menu.h"

#define TAM 3
#define TAMC 5
#define TAMT 5
#define TAMS 3
#define TAMTR 3



int main()
{
    eMascota lista[TAM];
    eTrabajo trabajos[TAMTR];

    int nextId=1000;
    int nextIdTrab=2000;

    int flagAlta=0;
    char seguir = 's';

    eColor colores[TAMC]= {
            {5000, "Negro"},
            {5001, "Blanco"},
            {5002, "Rojo"},
            {5003, "Gris"},
            {5004, "Azul"}
    };

    eTipo tipos[TAMT]={
    {1000, "Ave"},
    {1001, "Perro"},
    {1002, "Roedor"},
    {1003, "Gato"},
    {1004, "Pez"},
    };

     eServicio servicios[TAMS]={
    {20000, "Corte", 450.00 },
    {20001, "Desparasitado", 800.00},
    {20002, "Castrado", 600.00},
    };


    inicializarMascotas(lista,TAM);
    inicializarTrabajos(trabajos, TAMTR);

     do{
	        switch(menu()){

	            case 'A':
	                if(altaMascota(lista, TAM, colores, TAMC, tipos,TAMT, &nextId)){
                        printf("\n Carga exitosa. \n");
                        flagAlta=1;
	                }else{
	                    printf("\n Error en carga de mascotas. \n");
	                }


	                break;
	            case 'B':
	                if(flagAlta){
                            system("cls");
	                	 modificarMascota(lista, TAM, colores, TAMC, tipos, TAMT);

	                }else{
	                    printf("Primero debe cargar alguna mascota.\n\n");
	                }

	                break;
	            case 'C':
	                 if(flagAlta ){
                            system("cls");
	                        bajaMascota(lista, TAM, colores, TAMC, tipos, TAMT);
	                } else {
                        printf("Primero debes dar de alta una mascota.\n");
	                }
	                break;


	            case 'D':
	                if(flagAlta && listarMascotasPorTipoNombre(lista, TAM, colores, TAMC, tipos, TAMT)){
                        system("cls");
                        mostrarMascotas(lista, TAM, colores, TAMC, tipos, TAMT);
	                }else{
	                    printf("Primero debe cargar algun empleado.\n\n");
	                }
	                break;
                case 'E':
                    if(flagAlta){
                        system("cls");
                        mostrarTipos(tipos, TAMT);

                    }else{
	                    printf("Primero debe cargar alguna mascota.\n\n");
	                }
                    break;
                case 'F':
                    if(flagAlta){
                        system("cls");
                            mostrarColores(colores, TAMC);
                    }else{
	                    printf("Primero debe cargar alguna mascota.\n\n");
	                }
                    break;
                case 'G':
                    if(flagAlta){
                        system("cls");
                            mostrarServicios(servicios, TAMS);
                    }else{
	                    printf("Primero debe cargar alguna mascota.\n\n");
	                }
	                break;
                 case 'H':
                    if(flagAlta){
	                	altaTrabajo(trabajos, TAMTR, lista, TAM,colores, TAMC, tipos, TAMT,servicios, TAMS, &nextIdTrab);

	                }else{
	                    printf("Primero debe cargar alguna mascota.\n\n");
	                }
                    break;
                 case 'I':
                    if(flagAlta){
                            system("cls");
	                	mostrarTrabajos(trabajos, TAMTR, servicios, TAMS, lista, TAM);

	                }else{
	                    printf("Primero debe cargar alguna mascota.\n\n");
	                }
	                break;
                case 'J':
	                seguir='n';
	                break;

	            default:
	                printf("Opcion invalida.\n\n");
	                break;

	        }
	        system("pause");

	    }while(seguir=='s');
    return 0;
}


