
#include "validaciones.h"

int esNumerico(char str[])
{
    int i=0;
    int retorno = 1;
    if (str != NULL && strlen (str) > 0){
        while (str[i] != '\0' ){
            if (str[i] < '0' || str[i] > '9' ){
                retorno = 0;
                break ;
            }
            i++;
        }
}
return retorno;
}


int getInt(int * pResultado)
{
    int ret=-1;
    char buffer[64];
    scanf( "%s" ,buffer);
    if (esNumerico(buffer)){
        *pResultado = atoi(buffer);
        ret=1;
    }
    return ret;
}




int utn_getNumero( int * pResultado, char * mensaje, char * mensajeError, int minimo, int maximo, int reintentos)
{
    int ret;
    int num;
    if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0){
        while (reintentos>0){
            printf(mensaje);
            if (getInt(&num)==1){
                if (num<=maximo && num>=minimo)
                break ;
            }

            fflush(stdin);
            reintentos--;
            printf(mensajeError);
        }
        if (reintentos==0){
            ret=-1;
        }
        else{
            ret=0;
            *pResultado = num;
        }
}
return ret;
}


int esNumericoFlotante(char str[])
{
int    retorno = 1;
   int i=0;
   int cantidadPuntos=0;
   while(str[i] != '\0')
   {
       if (str[i] == '.' && cantidadPuntos == 0)
       {
           cantidadPuntos++;
           i++;
           continue;

       }
       if(str[i] < '0' || str[i] > '9')
           retorno = 0;
       i++;
   }
   return retorno;
}

float getFloat(float* pResultado)
{
    int ret=-1;
    char buffer[64];
    scanf( "%s" ,buffer);
    if (esNumericoFlotante(buffer)){
        *pResultado = atof(buffer);
        ret=1;
    }
    return ret;
}

float utn_getNumeroFlotante( float * pResultado, char * mensaje, char * mensajeError, int minimo, int maximo, int reintentos)
{
    int ret;
    float num;
    if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0){

        while (reintentos>0)
            {
            printf(mensaje);
            if(getFloat(&num) == 1){

            if (num<=maximo && num>=minimo){
                break;
            }
            }
            fflush(stdin);
            reintentos--;
            printf(mensajeError);
            }
        if (reintentos==0)
        {
            ret=-1;
        }
        else
        {
            ret=0;
            *pResultado = num;
        }
    }
    return ret;
}



int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}




void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}


int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}





int validarRangoEntero(int numero, int inf, int sup){
    int todoOk=0;
    if(numero>=inf && numero<=sup){
        todoOk= 1;
        }

    return todoOk;
}

int validarCaracter(char letra){
    int todoOk=0;
    if(letra=='s' || letra =='n'){
        todoOk= 1;
        }

    return todoOk;
}

int validarIdMascotas(eMascota mascotas[], int tam, int id){
    int existe =0;
    if(mascotas!=NULL && tam>0){
        for(int i=0; i<tam; i++){
            if(mascotas[i].id== id){
                existe = 1;
                break;
            }
        }
    }

return existe;

}

int validarColores(eColor colores[], int tam, int id){
    int existe =0;
    if(colores!=NULL && tam>0){
        for(int i=0; i<tam; i++){
            if(colores[i].id == id){
                existe = 1;
                break;
            }
        }
    }

return existe;

}

int validarServicios(eServicio servicios[], int tam, int id){
    int existe =0;
    if(servicios!=NULL && tam>0){
        for(int i=0; i<tam; i++){
            if(servicios[i].id == id){
                existe = 1;
                break;
            }
        }
    }

return existe;

}

int validarTipos(eTipo tipos[], int tam, int id){
    int existe =0;
    if(tipos!=NULL && tam>0){
        for(int i=0; i<tam; i++){
            if(tipos[i].id == id){
                existe = 1;
                break;
            }
        }
    }

return existe;

}

