#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
#include"mascotas.h"
#include"servicio.h"
#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED



#endif // VALIDACIONES_H_INCLUDED
/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */
int esNumerico(char str[]);




int getInt(int* pResultado);

/** \brief
 *
 * \param pResultado int* Puntero a variable donde se escribirá el valor ingresado en el caso de ser correcto.
 * \param mensaje char* Puntero a cadena de caracteres con mensaje a imprimir antes de pedirle al usuario datos por consola.
 * \param mensajeError char* Puntero a cadena de caracteres con mensaje de error en el caso de que el dato ingresado no sea válido.
 * \param minimo int Valor mínimo admitido.
 * \param maximo intValor máximo admitido (inclusive)
 * \param reintentos int cantidad de veces que el usuario puede reintentar ingresar un dato
 * \return int devuelde 0 si el valor ingresado es valido
 *
 */
int utn_getNumero( int * pResultado, char * mensaje, char * mensajeError, int minimo, int maximo, int reintentos);



/** \brief
 *
 * \param pResultado float* Puntero a variable donde se escribirá el valor ingresado en el caso de ser correcto.
 * \param mensaje char* Puntero a cadena de caracteres con mensaje a imprimir antes de pedirle al usuario datos por consola.
 * \param mensajeError char* Puntero a cadena de caracteres con mensaje de error en el caso de que el dato ingresado no sea válido.
 * \param minimo float Valor mínimo admitido.
 * \param maximo float Valor maximo admitido.
 * \param reintentos int cantidad de veces que el usuario puede reintentar ingresar un dato
 * \return int devuelde 0 si el valor ingresado es valido
 *
*/
float utn_getNumeroFlotante( float * pResultado, char * mensaje, char * mensajeError, int minimo, int maximo, int reintentos);

float getFloat(float* pResultado);

/**
 * \brief Verifica si el valor recibido es numérico(float)
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico(float) y 0 si no lo es
 *
 */
int esNumericoFlotante(char str[]);



/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[]);


/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return void
 */
void getString(char mensaje[],char input[]);


/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[]);




/** \brief Funcion que valida si caracter ingresado es 's' o 'n'
 *
 * \param letra char caracter a validar
 * \return int retonra 1 si es un caracter 's' o 'n', o 0 si no lo es.
 *
 */
int validarCaracter(char letra);

/** \brief funcion que valida que un id ingresado por el usuario corrsponda a un id de mascotas del array Mascotas
 *
 * \param mascotas[] eMascota array mascotas
 * \param tam int tamaño array mascotas
 * \param id int id ingresado por el usuario para validar
 * \return int retorna 1 si el id ingresado corresponde a un id del array mascotas, o 0 si no existe el id ingresado
 *
 */
int validarIdMascotas(eMascota mascotas[], int tam, int id);

/** \brief Funcion que valida que los id de color ingresado por el usuario correspondan a un id del array colores
 *
 * \param colores[] eColor array de colores
 * \param tam int tamaño array colores
 * \param id int id ingresado por el usuario para validar color
 * \return int retorna 1 si el id existe, o 0 si el id ingresado no existe como id de color.
 *
 */
int validarColores(eColor colores[], int tam, int id);

/** \brief Funcion que valida que un id de servicio ingresado por el usuario corresponda con un servicio existente
 *
 * \param servicios[] eServicio array servicios
 * \param tam int tamaño array servicios
 * \param id int id de servicios ingresado por usuario
 * \return int retorna 1 si el id ingresado coincide con un id de los servicios, o 0 si no coindice.
 *
 */
int validarServicios(eServicio servicios[], int tam, int id);


/** \brief Funcion que valida que un id de tipos ingresado por el usuario corresponda con un tipo existente
 *
 * \param tipos[] eTipo array tipos
 * \param tam int tamaño tipos
 * \param id int id de tipo ingresado por usuario
 * \return int retorna 1 si el id ingresado coincide con un id de tipos, o 0 si no coindice.
 *
 */
int validarTipos(eTipo tipos[], int tam, int id);
