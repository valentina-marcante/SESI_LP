#include <stdio.h>

int main() {
    int numeros[5];

    printf("Digite o primeiro valor:\n");
    scanf("%d", &numeros[0]);

    printf("Digite o segundo valor:\n");
    scanf("%d", &numeros[1]);

    printf("Digite o terceiro valor:\n");
    scanf("%d", &numeros[2]);

    printf("Digite o quarto valor:\n");
    scanf("%d", &numeros[3]);

    printf("Digite o quinto valor:\n");
    scanf("%d", &numeros[4]);

    printf("A soma de todos os valores é: %d\n", 
  numeros[0] + 
  numeros[1] + 
  numeros[2] + 
  numeros[3] + 
  numeros[4]);
  
}