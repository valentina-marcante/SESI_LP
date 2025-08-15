#include <stdio.h>

int main() {
    int num, positivos = 0;
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);
        if (num > 0) {
            positivos++;
        }
    }
    printf("Quantidade de positivos: %d\n", positivos);
}

