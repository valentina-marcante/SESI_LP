#include <stdio.h>

int main() {
    char nome_produto[100];
    float preco_unitario, total;
    int quantidade;
    
    printf("Digite o nome do produto: ");
    fgets(nome_produto, sizeof(nome_produto), stdin);

    printf("Digite o preço unitário (em R$): ");
    scanf("%f", &preco_unitario);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    total = preco_unitario * quantidade;

    printf("Valor total a ser pago pelo produto %s: R$%.2f\n", nome_produto, total);

    return 0;
}
