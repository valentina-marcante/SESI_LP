#include <stdio.h>

int main() {
    int totalVotos, votosA, votosB;
    float percentualA, percentualB;
    
    printf("Digite o total de votos: ");
    scanf("%d", &totalVotos);

    printf("Digite o número de votos do candidato A: ");
    scanf("%d", &votosA);

    printf("Digite o número de votos do candidato B: ");
    scanf("%d", &votosB);
    
    percentualA = (float)votosA / totalVotos * 100;
    percentualB = (float)votosB / totalVotos * 100;

    printf("Candidato A: %.2f%% dos votos\n", percentualA);
    printf("Candidato B: %.2f%% dos votos\n", percentualB);

    return 0;
}
