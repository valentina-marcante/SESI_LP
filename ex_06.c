#include <stdio.h>

int main() {
    char nome[100];
    float salario_mensal, total;
    int meses;

    printf("Digite o nome do funcionário: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o salário mensal (em R$): ");
    scanf("%f", &salario_mensal);

    printf("Digite o número de meses trabalhados no ano: ");
    scanf("%d", &meses);

    total = salario_mensal * meses;

    printf("Funcionário %sganhou R$%.2f em %d meses.\n", nome, total, meses);

    return 0;
}
