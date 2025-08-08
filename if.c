#include <stdio.h>

void main(){
    float nota01 = 0;
    float nota02 = 0;
    float nota03 = 0;
    float media = 0;
    
    printf ("Digite a primeira nota: ");
    scanf("%f" , &nota01);
    
    printf("Digite a segunda nota: ");
    scanf("%f" , &nota02);
    
    printf("Digite a terceira nota: ");
    scanf("%f" , &nota03);
    
    media = (nota01 + nota02 + nota03) / 3;
    
    printf("Sua media é: %.1f" , media);
    
    //Quando aluno atingir uma nota menor ou igual a 5
    //Exiba a seguinte mensagem: "O aluno está em reprovado!"
    
    //Quando o aluno atingir uma nota menor ou igual a 6.9
    //Exiba a seguinte mensagem: "O aluno está em recuperação!"

    //Quando o aluno atingir uma nota superior a 7 
    //Exiba a seguinte mensagem: "O aluno está aprovado!"
    
    //if(VERDADEIRO){
    // EXECUTAR ESSE BLOCO DE CODIGO
    // }
    
    // = COMPARA IGUALDE
    // < MENOR
    // > MAIOR
    // <= MENOR OU IGUAL
    // >= MAIOR OU IGUAL
    // ! NEGAÇÃO
    
    if ( media <= 5 ){
        printf ("O aluno está REPROVADO!");
    }else if( media <= 7){
    printf("O aluno esta RECUPERAÇÃO!");
    }
    
    
}