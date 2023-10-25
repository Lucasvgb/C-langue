/*
Questão. O que o programa abaixo faz? Qual a saída do programa abaixo para a entrada
4 6 <enter>? E qual a saída para a entrada 2 3 <enter>;? E qual a saída para a
entrada 5 7 <enter>?
Esse código ele calcula o MDC entre dois numeros.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

  int n1, n2, M, cond = 1;

  printf("Digite dois inteiros: ");
  scanf("%d %d" , &n1 , &n2);

  if(n1 < n2 ){
    M = n1;
  }
  else{
    M = n2;
  }
  while(cond){
    if(n1 % M == 0 && n2 % M == 0){
      printf("Resposta: %d. \n" , M);
      cond = 0;
    }
    M--;
  }
  return 0;
}