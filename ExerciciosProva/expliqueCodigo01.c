/*
Questões básicas de programação em Linguagem C
Questão. 
Explique o que o programa abaixo faz. Quais as saídas do programa para a
entrada 4 <enter> ? E para a entrada 5 <enter> ?
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

  int r, i , j , n = 1;
  scanf("%d",&r);

  for(i = r; i >= 1 ; i--){
    for(j = 1; j <= i; ++j){
      printf("%d", r + j - i);
    }
    printf("\n");
  }
  return 0;
}