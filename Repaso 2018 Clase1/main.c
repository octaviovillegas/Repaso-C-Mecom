#include <stdio.h>
#include <stdlib.h>




 //2do
void  duplicarEntero(int entero);

// 3ero
int  duplicarEnteroRetorno(int entero);

// 4to
void  duplicarEnteroPuntero(int* entero);

// 5to
void  mostrarLetras(char palabra[],int cantidad);
int main()
{

/*
    //1er
    int nota;
    int *pNota;
    pNota=&nota;
    nota=5;
    printf("\n el contenido de la variable 'nota' : %d",nota);
    printf("\n el contenido de la variable apuntada '*pNota' :%d",*pNota);
    *pNota=10;
    printf("\n el contenido de la variable apuntada '*pNota' : %d",*pNota);
    printf("\n el contenido de la variable 'nota' : %d",nota);

*/
    int edad=33;
    //2do
    printf("\nel valor de la edad es \t%d: ",edad);
    duplicarEntero(edad);
    printf("\nel valor de la edad es %d: ",edad);

    //3ero
    edad=duplicarEnteroRetorno(edad);
    printf("\nel valor de la edad es \t%d: ",edad);

    //4to
    duplicarEnteroPuntero(&edad);
    printf("\nel valor de la edad es \t%d: ",edad);

    //5to
    int numeros[]={32,45,18,23,9};
    printf("\n por array #3 \t%d: ",numeros[3]);
    printf("\n por punteros #3  \t%d: ",*(numeros+3));

    printf("\n por array al 0 \t%d: ",numeros[0]);
    printf("\n por punteros al 0 \t%d: ",*numeros);

    char nombre[10]="jeremias";
    mostrarLetras(nombre,10);


    return 0;

}

/** \brief paso 2
 * función que duplica el valor de la variable que recibe por parametro
 * \param entero int, el parametro que se va a duplicar
 * \return void
 *
 */
void  duplicarEntero(int entero)
{
    entero=entero*2;
}
/** \brief paso 3
 *función que duplica el valor de la variable que recibe por parametro
 * \param entero int, el parametro que se va a duplicar
 * \return int el valor duplicado
 */
int  duplicarEnteroRetorno(int entero)
{
    return entero*2;
}

/** \brief paso 4
 *función que duplica el valor de la variable que recibe por parametro
 * \param entero int*, el puntero de la variable del parametro que se va a duplicar
 * \return void
 */
void  duplicarEnteroPuntero(int *entero)
{
    *entero=*entero*2;
}

/** \brief paso 5
 *mostramos como se utilizan los punteros para mostrar contenidos
 * \param palabra[] char
 * \param cantidad int
 * \return void
 */
void  mostrarLetras(char palabra[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\nletra: \t%C",*(palabra+i));
    }
     for(i=0;i<cantidad;i++)
    {
        printf("\nletra: \t%C",palabra[i]);
    }
}
