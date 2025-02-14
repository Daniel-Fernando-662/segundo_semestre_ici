#include <stdio.h>

int n1 = 17;
int n2 = 98;

int suma();
int resta();
int multiplicacion();
float divicion();

void main(){
    printf("%d - %d = %d", n1, n2, resta());
}

int suma(){
    return n1-n2;
}