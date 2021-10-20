#include"colores.h"
#include "tipos.h"

#ifndef MASCOTAS_H_INCLUDED
#define MASCOTAS_H_INCLUDED
typedef struct{

    int id;
    char nombre[20];
    int idTipo;
    int idColor;
    int edad;
    char vacunado;
    int isEmpty;


}eMascota;


#endif // MASCOTAS_H_INCLUDED

/** \brief Funcion que inicializa array de mascotas colocando un 1 en el campo isEmpty
 *
 * \param lista[] eMascota array de mascotas a inicializar
 * \param tam int tamaño de array mascotas
 * \return int retorna 0 si no pudo realizar la inicalizacion del array, o 1 si pudo realizarlo.
 *
 */
int inicializarMascotas(eMascota lista[], int tam);

/** \brief Funcion que recorre array en busca de campo isEmpty libre (con valor 1)
 *
 * \param lista[] eMascota array de mascota a recorrer
 * \param tam int tamaño de array
 * \return int retorna -1 si no encontro lugar libre en el array, o retorna el numero (indice) donde se encuentra el campo isEmpty libre (valor 1)
 *
 */
int buscarLibre(eMascota lista[], int tam);

/** \brief Funcion que pide  datos a usuario para cargar en array mascotas.
 *
 * \param lista[] eMascota array mascotas a cargar
 * \param tam int tamaño de array mascotas
 * \param colores[] eColor array de colores
 * \param tamC int tamaño de array de colores
 * \param tipos[] eTipo array tipos
 * \param tamT int tamaño de array tipos
 * \param pId int* puntero a id que se asigna en la carga de datos y luego se incrementa par proxima asignacion
 * \return int retorna 1 si se realizo la carga correctamente o 0 si no pudo realizarla
 *
 */
int altaMascota(eMascota lista[], int tam, eColor colores[], int tamC, eTipo tipos[], int tamT, int* pId);

/** \brief Funcion que muestra una sola mascota
 *
 * \param unaMascota eMascota mascota a mostrar
 * \param colores[] eColor array colores
 * \param tamC int tamaño array colores
 * \param tipos[] eTipo array tipos
 * \param tamT int tamaño array tipos
 * \return void no tiene retorno ya que su funcion solo es realizar el print de una mascota y sus datos
 *
 */
void mostrarMascota(eMascota unaMascota, eColor colores[], int tamC, eTipo tipos[], int tamT);

/** \brief Funcion que muestra la lista de mascotas cargadas en el array.
 *
 * \param lista[] eMascota array mascotas a mostrar
 * \param tam int tamaño array
 * \param colores[] eColor array colores
 * \param tamC int tamaño array colores
 * \param tipos[] eTipo array tipos
 * \param tamT int tamaño array tipos
 * \return int retorna 1 si pudo mostrar los datos del array o 0 si hubo un error.
 *
 */
int mostrarMascotas(eMascota lista[], int tam, eColor colores[], int tamC, eTipo tipos[], int tamT);

/** \brief Funcion que da de baja una mascota seleccionada por el usuario
 *
 * \param lista[] eMascota array de motos a recorrer.
 * \param tam int tamaño de array motos
 * \param colores[] eColor array colores
 * \param tamC int tamaño array colores
 * \param tipos[] eTipo array tipos
 * \param tamT int tamaño array tipos
 * \return int retorna 1 si pudo realizar la baja o 0 si no pudo realizarla.
 *
 */
int bajaMascota(eMascota lista[], int tam, eColor colores[], int tamC, eTipo tipos[], int tamT);

/** \brief Funcion que a partir de un id ingresado por el usuario, busca una mascota coincidente con id ingresado y
 * devuelve su posicion en el array.
 *
 * \param lista[] eMascota array mascotas a recorrer
 * \param tam int tamaño array mascota
 * \param id int id utilizado para buscar coincidencias en el array mascotas
 * \return int retorna -1 si los id del array mascotas no coinciden con el id que compara la funcion, o retorna el indice del
 *  array donde el id ingresado por el usuario coincide con un id del array mascotas.
 *
 */
int buscarMascota(eMascota lista[], int tam, int id);

/** \brief funcion que lista las mascotas segun su tipo (ascendente) y su nombre alfabeticamente (ascendente)
 *
 * \param mascotas[] eMascota array de mascotas a recorrer
 * \param tam int tamaño array mascoas
 * \param colores[] eColor array colores
 * \param tamC int tamaño array colores
 * \param tipos[] eTipo array tipos
 * \param tamT int tamaño array tipos
 * \return int retorna 1 si logro listar correctamente los datos, o 0 si no pudo realizarlo.
 *
 */
int listarMascotasPorTipoNombre(eMascota mascotas[], int tam, eColor colores[], int tamC, eTipo tipos[], int tamT);

/** \brief Funcion que carga el nombre de una mascota en un string
 *
 * \param mascota[] eMascota array mascotas
 * \param tam int tamaño array mascoas
 * \param idMascota int id de mascota a cargar nombre
 * \param descripcion[] char string donde se carga el nombre de la mascota de idMascota
 * \return int retorna 1 si logro cargar la descripcion de la mascota correctamente o 0 si no pudo relizarlo.
 *
 */
int cargarDescripcionMascota(eMascota mascota[], int tam, int idMascota, char descripcion[]);


/** \brief Funcion que da la opcion al ususario de modificar datos de la mascota ingresada
 *
 * \param mascota[] eMascota array de mascotas
 * \param tam int tamaño de array de mascotas
 * \param colores[] eColor array de colores de mascotas
 * \param tamC int tamaño de array de colores
 * \param tipos[] eTipo array de tipos de mascotas
 * \param tamT int tamaño de array de tipos
 * \return int retorna 1 si logro realizar la modificacion correctamente o 0 si no pudo realizarla.
 *
 */
int modificarMascota(eMascota mascota[], int tam, eColor colores[], int tamC, eTipo tipos[], int tamT);
