#include"mascotas.h"
#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED
typedef struct{

    int id;
    char descripcion[20];
    float precio;


}eServicio;


#endif // SERVICIO_H_INCLUDED
/** \brief Funcion que carga la descripcion de un servicio segun su id
 *
 * \param servicios[] eServicio array servicios
 * \param tam int tamaño servicios
 * \param idMascota int id mascotas ingresadas para ver su servicio
 * \param descripcion[] char descripcion del servicio
 * \return int retorna 1 si logro cargar la descripcion o 0 si no lo realizo.
 *
 */
int cargarDescripcionServicio(eServicio servicios[], int tam, int idMascota, char descripcion[]);

/** \brief  funcion que lista los servicios disponibles
 *
 * \param servicios[] eServicio array servicios
 * \param tam int tamaño array servicios
 * \return int retorna 1 si logro imprimir los servicios o 0 si no logro realiarlo.
 *
 */
int mostrarServicios(eServicio servicios[], int tam);

