#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Digite tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;
    printf("Media: %.2f\n", media);
}
