#include <stdio.h>
void tabladel5();
void main(){ //ambito o scope de variables/funciones
    int numero_1;
    int numero_2 = 5;
    printf("%d", numero_1+numero_2);//interpolacion de cadenas//ambito o scope de variables/funciones
}
void tabladel5(){

    int tabla = 5;
    int prod = 0;
    short int contador = 1
    prod = tabla * contador;
    printf("%d * %d = %d",tabla,contador,prod);
    contador = contador + 1
    prod = tabla * contador; //destructiva
    printf("%d * %d = %d\n", tabla,contador,prod);
    ++contador;
    prod = tabla * contador;
    printf("%d * %d = %d\n",tabla,contador,prod)
}