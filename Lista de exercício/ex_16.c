#include <stdio.h>

int main() {
    int anos, dias;

    printf("Digite a sua idade em anos: ");
    scanf("%d", &anos);

    dias = anos * 365;

    printf("Você viveu aproximadamente %d dias.\n", dias);

    return 0;
}
