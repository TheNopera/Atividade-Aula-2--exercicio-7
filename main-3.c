#include <stdio.h>

int main() {
    float custoFabrica, custoFinal;

    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    custoFinal = custoFabrica * 1.28 * 1.45;

    printf("O custo final do carro ao consumidor é de: R$ %.2f\n", custoFinal);

    return 0;
}