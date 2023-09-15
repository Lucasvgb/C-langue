#include <stdio.h>
/*
Escreva um programa para informar o maior
elemento de um vetor de 5 posições do tipo inteiro.
Esse programa deve possuir uma função para
verificar o maior número desse vetor.
*/
int main(){

  float maiorElemento(float maiorNum[]);
  float p;
  float num [5];
  float maiorNumero;


  for(int i = 0 ; i < 5 ; i ++){
    printf("Digite o %d elemento para o vetor: ", i + 1);
    scanf("%f", &num[i]);
  }
  maiorNumero = maiorElemento(num);
  printf("O maior numero eh: ", maiorNumero);

  return 0;
}

float maiorElemento(float maiorNum[5]){

  float maior = 0;
  for(int i = 0; i < 5; i++){
    //Teste do maior numero.
    if(maiorNum[i] > maior){
      maior = maiorNum[i];
    }
  }
  return maior;
}