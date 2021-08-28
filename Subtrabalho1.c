//Carro Novo = custo da fábrica + porcentagem do distribuidor + impostos
#include <stdio.h>
int main () {

    double A, B, W, X, Y, Z; // W = custo de fábrica; X = porcentagem do distribuidor; Y = impostos; Z = preço final; 

    printf("\nInsira o preço de fábrica do carro, o percentual do distribuidor e o percentual de impostos, respectivamente: ");
    scanf("%lf", &W);
    scanf("%lf", &X);
    scanf("%lf", &Y);
    

    A = (X / 100) * W;
    B= (Y / 100) * W;
    Z = W + A + B;

    
    printf("\tCusto de fábrica:  "), printf("%lf\n", W);
    printf("\tPorcentagem do distribuidor:  "), printf("%lf\n", X);
    printf("\tImpostos:  "), printf("%lf\n", Y);
    printf("\tO valor do carro é:  "), printf("%lf\n", Z);


    return 0;
}
