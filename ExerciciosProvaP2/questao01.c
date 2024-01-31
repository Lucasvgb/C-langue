/*
Questão 1 (3,0pt). Qual a saída do programa a seguir? Qual seria a saída do programa se
mudássemos lista para int lista[TAM]={1,2,9,4,3,2,1}; ?
*/

#include<stdio.h>
#define TAM 7

int P(int *lista, int i, int f){
    if(lista[ i ] == lista[ f ])
      printf("%d (posicao %d) e %d (posicao %d).\n",lista[i],i,lista[f],f);
      if(f - i <= 1)
        return(1);
          else if (lista[i]==lista[f] && P(lista, i + 1,f - 1))
            return(1);
              else 
                return(0);
}
int main(void){
    int lista[TAM]={1,2,9,4,3,2,1};
    int tamanho = TAM;
    if(!P(lista,0,TAM-1))
      printf("NAO!\n");
}