#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
} eEmpleado;

void mostrarEmpleado(eEmpleado employee);

int main()
{
    eEmpleado unEmpleado;
    eEmpleado emp3;

    unEmpleado.legajo = 1234;
    strcpy(unEmpleado.nombre, "Juan");
    unEmpleado.sexo = 'm';
    unEmpleado.sueldo = 10000;
    unEmpleado.fechaIngreso.dia = 17;
    unEmpleado.fechaIngreso.mes = 9;
    unEmpleado.fechaIngreso.anio = 2018;

   /* printf("Ingrese legajo: ");
    scanf("%d", &emp3.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(emp3.nombre);

    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &emp3.sexo);

    printf("Ingrese sueldo: ");
    scanf("%f", &emp3.sueldo);

    eFecha unaFecha;

    printf("Ingrese dia: ");
    scanf("%d", &unaFecha.dia);

    printf("Ingrese mes: ");
    scanf("%d", &unaFecha.mes);

    printf("Ingrese anio: ");
    scanf("%d", &unaFecha.anio);

    emp3.fechaIngreso = unaFecha;

    mostrarEmpleado(emp3);*/

  //  mostrarEmpleado(unEmpleado);
  eEmpleado emp4 = {2323, "Alberto", 'm', 21000,{11, 4, 2008}};

  mostrarEmpleado(emp4);


    return 0;
}

void mostrarEmpleado(eEmpleado employee)
{

    printf("%d %s %c %.2f %02d/%02d/%d\n\n", employee.legajo, employee.nombre, employee.sexo, employee.sueldo, employee.fechaIngreso.dia, employee.fechaIngreso.mes, employee.fechaIngreso.anio);
}
