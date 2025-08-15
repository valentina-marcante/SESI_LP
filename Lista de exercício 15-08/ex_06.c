#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade em anos: ");
    scanf("%d", &idade);
    printf("Voce viveu aproximadamente %d dias\n", idade * 365);
}
