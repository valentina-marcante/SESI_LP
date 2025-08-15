#include <stdio.h>

int main() {
    int n, i, ehPrimo = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n <= 1) ehPrimo = 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            ehPrimo = 0;
            break;
        }
    }

    if (ehPrimo) {
        printf("%d eh primo.\n", n);
    } else {
        printf("%d nao eh primo.\n", n);
    }
}
