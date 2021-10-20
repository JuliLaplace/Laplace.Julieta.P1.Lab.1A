#ifndef COLORES_H_INCLUDED
#define COLORES_H_INCLUDED

typedef struct {

    int id;
    char descripcion[20];


}eColor;

#endif // COLORES_H_INCLUDED

/** \brief Funcion que carga el nombre (descripcion) de un color
 *
 * \param colores[] eColor array colores
 * \param tam int tamaño colores
 * \param idMascota int id de mascota a buscar su nombre
 * \param descripcion[] char string donde se cargara nombre de mascota
 * \return int reotrna 1 si logro cargar su descripcion o 0 si no pudo realizarlo
 *
 */
int cargarDescripcionColor(eColor colores[], int tam, int idMascota, char descripcion[]);

/** \brief Funcion que muestra la lista de colores
 *
 * \param colores[] eColores array colores
 * \param tamC int tamaño colores
 * \return int retorna 1 si logro cargar la lista de colores o 0 si no logro realizarlo
 *
 */
int mostrarColores(eColor colores[], int tamC);


