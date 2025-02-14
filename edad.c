//Escribe un programa que dado el año de nacimiento y el año
//actual, calcule la edad de una persona.
//Escriba una funcion que imrpima la edad.
//Escriba otra funcion que la retorne.
//
#include <stdio.h>
void imprimiredad1();
void imprimiredad2();

void main(){
    imprimiredad1();
    imprimiredad2();
}

void imprimiredad1(){
    int a_actual = 2025;
    int a_nacimiento = 2006;
    int edad = a_actual - a_nacimiento;
    printf("tienes %d años de edad\n",edad);
}
void imprimiredad2(){

}