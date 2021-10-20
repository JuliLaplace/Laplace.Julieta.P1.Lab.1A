#include"menu.h"

char menu (){



   char opcion;

    system("cls");
    printf("*********************************************************************************************\n");
    printf("*                                        MASCOTAS                                           *\n");
    printf("*********************************************************************************************\n");


    printf("    A) ALTA MASCOTA.\n");
    printf("    B) MODIFICAR MASCOTA.\n");
    printf("        1) Tipo.\n");
    printf("        2) Vacunado.\n");
    printf("    C) BAJA MASCOTA.\n");
    printf("    D) LISTAR (Por tipo y nombre).\n");
    printf("    E) LISTAR TIPOS\n");
    printf("    F) LISTAR COLORES.\n");
    printf("    G) LISTAR SERVICIO\n");
    printf("    H) ALTA TRABAJO.\n");
    printf("    I) LISTAR TRABAJO.\n");
    printf("    J) SALIR.\n");
    printf("*********************************************************************************************\n");
    printf("Ingrese opcion deseada: ");
    fflush(stdin);
    scanf("%c",&opcion);

    opcion = toupper(opcion);
    return opcion;


}




char subMenuModificar(){



   char opcion;

    system("cls");
    printf("*********************************************************************************************\n");
    printf("*                                   Modificar mascota                                        *\n");
    printf("*********************************************************************************************\n");


    printf("    a) Modificar tipo de mascota.\n");
    printf("    b) Modificar vacuna de mascota.\n");
    printf("*********************************************************************************************\n");
    printf("Ingrese opcion deseada: ");
   fflush(stdin);
    scanf("%c",&opcion);

    opcion = toupper(opcion);
    return opcion;


}
