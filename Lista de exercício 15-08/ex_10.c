#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Digite o peso (kg) e altura (m): ");
    scanf("%f %f", &peso, &altura);
    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);
}
