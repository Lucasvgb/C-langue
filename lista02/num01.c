/*
1. Faça um programa que verifique se um determinado número é primo. O número a ser
testado deve ser fornecido pelo usuário do programa. O programa deve imprimir a
mensagem “NUMERO PRIMO” caso o número seja primo, e “NUMERO NAO PRIMO”
caso contrário.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

  int num,i,cont = 0;

  printf("Digite o numero: \n",num);
  scanf("%d",&num);
  
  for(i = 1; i <= num; i++){
    if(num % i == 0){
      cont++;
    }
  }
  if(cont == 2){
    printf("NUMERO ");
  }
  else{
    printf("NUMERO NAO PRIMO");
  }


  return 0;
}