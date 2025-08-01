#include <stdio.h>

int main() {
    float valor_produto, percentual_desconto, valor_desconto, novo_preco;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor_produto);

    printf("Digite a porcentagem de desconto: ");
    scanf("%f", &percentual_desconto);

    valor_desconto = (valor_produto * percentual_desconto) / 100;

    novo_preco = valor_produto - valor_desconto;

    printf("Valor do desconto: R$ %.2f\n", valor_desconto);
    printf("Novo preco do produto: R$ %.2f\n", novo_preco);

    return 0;
}
