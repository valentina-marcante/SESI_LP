#include <stdio.h>

int main() {
    printf("VETORES\n");

    int numeros[5];
    int soma = 0;

    for(int i = 0; i < 5; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 5; i++) {
        soma = soma + numeros[i];
    }

    printf("A soma de todas as posições é: %d\n", soma);

}
