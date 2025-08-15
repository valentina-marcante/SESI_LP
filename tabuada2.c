#include <stdio.h>
int main(){
  
   int tabuada= 0;
   int i;
   
   printf("Digite o numero da tabuada");
   scanf("%d", &tabuada);
   
   for (i = 0; i <= 10; i=i+1){
  printf ("\n %d x %d = %d" , i , tabuada, i* tabuada);
   }
  
  
  
  
}