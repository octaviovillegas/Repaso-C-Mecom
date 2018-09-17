#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 2

const int x = 10;

typedef struct{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;

}eEmpleado;

void mostrarEmpleado(eEmpleado employee);
void mostrarEmpleados(eEmpleado personal[],int tamanio);

int main()
{

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
    return 0;
}

void mostrarEmpleado(eEmpleado employee){

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
