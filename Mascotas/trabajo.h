#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include "fecha.h"
#include"mascotas.h"
#include"servicio.h"
#include "validaciones.h"
#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED

typedef struct{

    int id;
    int idMascota;
    int idServicio;
    eFecha fecha;
    int isEmpty;


}eTrabajo;

#endif // TRABAJO_H_INCLUDED


/** \brief Funcion que busca un lugar (indice) libre en array trabajos.
 *
 * \param lista[] eTrabajo array trabajos
 * \param tam int tamanio array trabajos
 * \return int retorna -1 si no logro encontrar un indice libre en array, o retorna el numero de indice donde el array tiene un lugar libre.
 *
 */
int buscarLibreTrabajo(eTrabajo lista[], int tam);

/** \brief Funcion que inicializa array de trabajos colocando un 1 en el campo isEmpty
 *
 * \param lista[] eTrabajo array trabajos
 * \param tam int tamaño array trabajos
 * \return int retorna 0 si no pudo realizar la inicalizacion del array, o 1 si pudo realizarlo.
 *
 */
int inicializarTrabajos(eTrabajo lista[], int tam);

/** \brief Funcion que pide  datos de trabajos a usuario para cargar en array trabajos.
 *
 * \param lista[] eTrabajo array trabajos a cargar
 * \param tam int tamaño array trabajos
 * \param mascotas[] eMascota array mascotas
 * \param tamM int tamaño array mascoas
 * \param colores[] eColor array colores
 * \param tamC int tamaño array colores
 * \param tipos[] eTipo array tipos
 * \param tamT int tamaño array tipos
 * \param servicios[] eServicio array servicios
 * \param tamS int tamaño array servicios
 * \param pId int* puntero a id que se asigna en la carga de datos y luego se incrementa par proxima asignacion
 * \return int retorna 1 si se realizo la carga correctamente o 0 si no pudo realizarla
 *
 */
int altaTrabajo(eTrabajo lista[], int tam, eMascota mascotas[], int tamM, eColor colores[], int tamC, eTipo tipos[], int tamT, eServicio servicios[], int tamS, int* pId);



/** \brief Funcion que muestra una lista de trabajos realizados.
 *
 * \param trabajos[] eTrabajo array trabajos
 * \param tamT int tamaño array trabajos
 * \param servicios[] eServicio array servicios
 * \param tamS int tamaño array servicios
 * \param mascotas[] eMascota array mascoas
 * \param tamM int tamaño array mascotas
 * \return int retorna 1 si logro mostrar por pantalla todos los trabajos o 0 si no pudo realizarlo
 *
 */
int mostrarTrabajos(eTrabajo trabajos[] , int tamT, eServicio servicios[], int tamS, eMascota mascotas[], int tamM);


/** \brief Funcion que muestra un trabajo realizado
 *
 * \param trabajo eTrabajo trabajo realizado a mostrar
 * \param servicio[] eServicio array servicios
 * \param tamS int tamaño array servicios
 * \param mascotas[] eMascota array mascoas
 * \param tamM int tamaño array mascoas
 * \return void no tiene retorno ya que su funcion solo es imprimir un trabajo realizado y sus descripciones.
 *
 */
void mostrarTrabajo(eTrabajo trabajo, eServicio servicio[], int tamS, eMascota mascotas[], int tamM);

