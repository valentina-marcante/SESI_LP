#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de combustível usado (em litros): ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    printf("Consumo médio: %.2f km/l\n", consumo);

    return 0;
}
