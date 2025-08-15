#include <stdio.h>

int main() {
    int n;
    float soma = 0, numero;

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%f", &numero);
        soma += numero;
    }

    printf("Media = %.2f\n", soma / n);
}
