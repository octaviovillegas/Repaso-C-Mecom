#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 6

const int x = 10;

typedef struct{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;

}eEmpleado;

void mostrarEmpleado(eEmpleado employee);
void mostrarEmpleados(eEmpleado personal[],int tamanio);
void oredenarEmpleados(eEmpleado personal[],int tamanio);
int main()
{
/*
    eEmpleado lista[TAM];

    for(int i=0; i < TAM; i++){
    printf("Ingrese legajo: ");
    scanf("%d", &lista[i].legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(lista[i].nombre);

    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &lista[i].sexo);

     printf("Ingrese sueldo: ");
    scanf("%f", &lista[i].sueldo);

   // mostrarEmpleado(lista[i]);
    }
    mostrarEmpleados(lista,TAM);
*/
    eEmpleado listaCargada[]={
        {111,"pepe",'m',7000},
        {222,"maria",'f',2000},
        {333,"Jose",'m',3000},
        {444,"juan",'m',5000},
        {555,"ester",'f',6000},
        {666,"fede",'m',4000}
    };
    printf("\n\n sin ordenar \n\n");
    mostrarEmpleados(listaCargada,TAM);

    //oredenarEmpleados(listaCargada,TAM);

    printf("\n\n ordenado \n\n");
    mostrarEmpleados(listaCargada,TAM);

     printf("\n\n sin ordenar \n\n");
    mostrarEmpleados(listaCargada,TAM);

    oredenarEmpleadosDosCriterios(listaCargada,TAM);

    printf("\n\n ordenado \n\n");
    mostrarEmpleados(listaCargada,TAM);

    return 0;
}
void oredenarEmpleadosDosCriterios(eEmpleado personal[],int tamanio)
{
    int i;
    int j;
    eEmpleado auxEmpleado;
    for(i=0;i<tamanio-1;i++)
    {
       for(j=i+1;j<tamanio;j++)
        {
              if(personal[i].sexo<personal[j].sexo)
              {
                  auxEmpleado=personal[i];
                  personal[i]=personal[j];
                  personal[j]=auxEmpleado;
              }else if(personal[i].sexo==personal[j].sexo && strcmp(personal[i].nombre,personal[j].nombre))
              {
                    auxEmpleado=personal[i];
                  personal[i]=personal[j];
                  personal[j]=auxEmpleado;
              }
        }
    }
}
void oredenarEmpleados(eEmpleado personal[],int tamanio)
{
    int i;
    int j;
    eEmpleado auxEmpleado;
    for(i=0;i<tamanio-1;i++)
    {
       for(j=i+1;j<tamanio;j++)
        {
              if(personal[i].sueldo<personal[j].sueldo)
              {
                  auxEmpleado=personal[i];
                  personal[i]=personal[j];
                  personal[j]=auxEmpleado;
              }
        }
    }
}
void mostrarEmpleado(eEmpleado employee)
{

  printf("%d %s %c %.2f\n\n", employee.legajo, employee.nombre, employee.sexo, employee.sueldo);
}
void mostrarEmpleados(eEmpleado personal[],int tamanio)
{
  int i;
  for(i=0;i<tamanio;i++)
  {
      mostrarEmpleado(personal[i]);
  }
  //printf("%d %s %c %.2f\n\n", employee.legajo, employee.nombre, employee.sexo, employee.sueldo);
}
