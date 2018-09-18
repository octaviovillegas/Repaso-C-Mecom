#include <stdlib.h>
#include <stdio.h>
#include "Alumno.h"
#define A 3


typedef struct{
    int numero;
    char texto[15];
    int estaVacio;
}sOpcion;

typedef struct{
    char titulo[15];
    sOpcion listadoDeOpciones[5];
}sMenu;

sMenu InicializarMenu(sMenu unMenu);
sMenu CargaDeMenu(sMenu unMenu);
sMenu EliminaOpcion(sMenu unMenu);
void MostrarMenu(sMenu unMenu);

sOpcion RetornarOpcion(sOpcion listadoOpciones[],int cantidad);
sOpcion AltaOpcion();
void MostrarOpcion(sOpcion opcionParametro);
void MostrarListadoOpcion(sOpcion listado[],int cantidad);

int main()
{

    int i;
    sMenu mimenu;
    mimenu=InicializarMenu(mimenu);
    for(i=0;i<5;i++)
    {
        printf("\n esta : %d", mimenu.listadoDeOpciones[i].estaVacio);
    }
    mimenu=CargaDeMenu(mimenu);
    MostrarMenu(mimenu);
    mimenu=EliminaOpcion(mimenu);
    MostrarMenu(mimenu);
    return 0;
}

sMenu EliminaOpcion(sMenu unMenu)
{
    int numero;
    printf("que numero quiere eliminar");
    scanf("%d",&numero);
    for(int i=0;i<5;i++ )
    {
        if (unMenu.listadoDeOpciones[i].numero==numero)
        {
            unMenu.listadoDeOpciones[i].estaVacio=0;
        }
    }
    return unMenu;
}



sMenu CargaDeMenu(sMenu unMenu)
{
    int i;
    printf("\ningrese titulo");
    gets(unMenu.titulo);
    for(i=0;i<5;i++)
    {
        unMenu.listadoDeOpciones[i]=AltaOpcion();
    }
     return unMenu;
}
sMenu InicializarMenu(sMenu unMenu)
{
    int i;
    for(i=0;i<5;i++)
    {
        unMenu.listadoDeOpciones[i].estaVacio=0;
    }
    return unMenu;
}
void MostrarMenu(sMenu unMenu)
{
    printf("\n\t\t  %s", unMenu.titulo);
    MostrarListadoOpcion(unMenu.listadoDeOpciones,5);
}
void MostrarListadoOpcion(sOpcion listado[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        if(listado[i].estaVacio==1)
        {
            MostrarOpcion(listado[i]);
        }

    }
}
void MostrarOpcion(sOpcion opcionParametro)
{
     printf("\n\t%d :\\t %s",opcionParametro.numero,opcionParametro.texto);

}
sOpcion AltaOpcion()
{
    sOpcion retornoOpcion;

    printf("\n ingrese numero :");
    scanf("%d",&retornoOpcion.numero);
    printf("\n ingrese el texto :");
    fflush(stdin);
    gets(retornoOpcion.texto);
    retornoOpcion.estaVacio=1;

    return retornoOpcion;
}





sOpcion RetornarOpcion(sOpcion listadoOpciones[],int cantidad)
{
    int i;
    int opcion;

   /* for(i=0;i<cantidad;i++)
    {
        printf("\n\t%d :\\t %s",listadoOpciones[i].numero,listadoOpciones[i].texto);
    }*/
    MostrarListadoOpcion(listadoOpciones,cantidad);
    printf("\n\t Ingrese su opciòn");
    scanf("%d",&opcion);
    sOpcion opcionStruct;
    opcionStruct.numero=opcion;
    strcpy(opcionStruct.texto,listadoOpciones[opcion -1].texto);
    return opcionStruct;
}




