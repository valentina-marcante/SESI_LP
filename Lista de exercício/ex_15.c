#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);

    minutos = horas * 60;
    segundos = minutos * 60;

    printf("%d hora(s) é equivalente a %d minuto(s) e %d segundo(s).\n", horas, minutos, segundos);

    return 0;
}
