/*
Questões envolvendo Funções e Ponteiros.
Questão. Escreva o código da função troca que deverá trocar os conteúdos das
variáveis a e b, no programa em C abaixo:
*/
/*
O uso de ponteiros permite que a função modifique as variáveis originais, em vez de trabalhar com cópias locais. Isso é útil quando o objetivo é alterar o conteúdo das variáveis fora da função.
*/

#include <stdio.h>

void troca(int *a, int *b);

int main(){

  int a = 1 , b = 2;
  printf("a,b: %d,%d\n", a , b);

  troca(&a , &b);
  printf("a,b: %d,%d\n", a , b);
  
  return 0;
}

void troca(int *a, int *b){

  int temporaria = *a;
  *a = *b;
  *b = temporaria;

}