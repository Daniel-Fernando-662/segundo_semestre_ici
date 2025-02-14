#include <stdio.h>
void imprimiredad1();
int imprimiredad2();

void main(){
    imprimiredad1();
    int edad = imprimiredad2();//asignacion de funcion
    printf("tienes %d años de edad\n",edad);
    
    printf("tienes %d años de edad\n",imprimiredad2());
}

void imprimiredad1(){
    int a_actual = 2025;
    int a_nacimiento = 2006;
    int edad = a_actual - a_nacimiento;
    printf("tienes %d años de edad\n",edad);
}
int imprimiredad2(){
    int a_actual = 2025;
    int a_nacimiento = 1950;
    int edad = a_actual - a_nacimiento;
    return edad;
}