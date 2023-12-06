/*
Questão 5. Explique o que o programa abaixo faz. Qual a saída do programa? Quantas
vezes a função P é chamada? Que mudança (de um valor) no vetor lista faz com que
a saída do programa fosse SIM! ?
*/
#include<stdio.h>
#define TAM 7
  int P(int *lista, int i, int f){
    if(lista[i]!=lista[f])
      printf("%d (posicao %d) e %d(posicao %d).\n",lista[i],i,lista[f],f);
    if(f-i<=1)
      return(1);
    else if (lista[i]==lista[f]&&P(lista,i+1,f-1))
      return(1);
    else 
      return(0);
}
int main(void){
  int lista[TAM]={1,2,3,4,4,2,1};
  int tamanho=TAM;
  if(P(lista,0,TAM-1))
    printf("SIM!");
}
