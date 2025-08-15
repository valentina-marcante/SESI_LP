#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("Maior: %d\n", a);
    else if (b > a)
        printf("Maior: %d\n", b);
    else
        printf("São iguais\n");
}
