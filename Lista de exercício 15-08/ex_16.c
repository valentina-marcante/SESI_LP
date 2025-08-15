#include <stdio.h>

int main() {
    int n;
    unsigned long long fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("Fatorial de %d = %llu\n", n, fatorial);
}
