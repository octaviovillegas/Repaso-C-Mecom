#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;

}eEmpleado;




void mostrarEmpleado(eEmpleado employee);

int main()
{
    printf("Ejemplo estructuras ,Repaso 2018\n");
    //struct empleado unEmpleado;
    eEmpleado unEmpleado;

    eEmpleado otroEmpleado = {1133, "Juana",'f', 15000};
    eEmpleado emp3;
    eEmpleado emp4;

    unEmpleado.legajo = 1234;
    strcpy(unEmpleado.nombre, "Juan");
    unEmpleado.sexo = 'm';
    unEmpleado.sueldo = 10000;

    emp4 = unEmpleado;

    mostrarEmpleado(otroEmpleado);
    mostrarEmpleado(unEmpleado);

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

    mostrarEmpleado(emp3);*/


    mostrarEmpleado(emp4);

    return 0;
}

void mostrarEmpleado(eEmpleado employee){

  printf("%d %s %c %.2f\n\n", employee.legajo, employee.nombre, employee.sexo, employee.sueldo);
}
