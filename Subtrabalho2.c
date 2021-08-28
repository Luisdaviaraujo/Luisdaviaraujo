
#include <stdio.h>
#include <math.h>
int main () {
    double M, A, U, X, Y, Z; // M = MASSA; A = ACELERAÇÃO; U = TEMPO GASTO NA DECOLAGEM
    printf("\nInsira aqui a massa do avião em toneladas, a aceleração e o tempo gasto na decolagem:  ");
          scanf("%lf", &M);
          scanf("%lf", &A);
          scanf("%lf", &U);
    X = (A * U);
    Y = (A * pow(U, 2))/2;
    Z = (M * pow(X, 2))/2;

    printf("\tVELOCIDADE =  "), printf("%.2lf\n", X * 3.6);
    printf("\tESPAÇO PERCORRIDO =  "), printf("%.2lf\n", Y);
    printf("\tTRABALHO REALIZADO =  "), printf("%.2lf\n", Z);


    return 0;
}