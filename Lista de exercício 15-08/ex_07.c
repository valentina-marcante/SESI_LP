#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Valores trocados: a = %d, b = %d\n", a, b);
}
