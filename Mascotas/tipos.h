#ifndef TIPOS_H_INCLUDED
#define TIPOS_H_INCLUDED
typedef struct {

    int id;
    char descripcion[20];


}eTipo;


#endif // TIPOS_H_INCLUDED
/** \brief funcion que carga descripcion de tipo segun id ingresado
 *
 * \param tipos[] eTipo array tipos
 * \param tam int tamaño array tipos
 * \param idMascota int id de mascota para cargar servicio
 * \param descripcion[] char descripcion de servicio a
 * \return int retorna 1 si logro cargar la descripcion o 0 si no pudo realizarlo
 *
 */
int cargarDescripcionTipo(eTipo tipos[], int tam, int idMascota, char descripcion[]);
/** \brief Funcion que imprime los tipos
 *
 * \param tipos[] eTipo array tipos
 * \param tam int tamaño tipos
 * \return int retorna 1 si logro impirmirlos o 0 si no logro realizarlo.
 *
 */
int mostrarTipos(eTipo tipos[], int tam);

