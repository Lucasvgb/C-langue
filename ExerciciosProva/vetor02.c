/*
Questão. Escreva um programa em C que faça o seguinte:
1) leia 5 números do tipo float,
2) armazene estes números em um vetor,
3) identifique o maior dos números vetor,
4) divida cada elemento do vetor pelo valor máximo encontrado na etapa 3, e
5) imprima cada um dos elementos, entre parêntesis e separados por vírgula,
conforme o exemplo: (0.2,0.3,0.4,0.1,1).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  float array[5];
  float maior = array[0];
  float soma = 0;
  float divisao;

  float tamanhoDoArray = sizeof(array) / sizeof(array[0]);
  
  //Lê o array
  for(int i = 0; i < tamanhoDoArray; i++){
    printf("Digite um valor para o array[%d]: ", i);
    scanf("%d", &array[i]);
  }

  // Identifica o maior numero do Vetor.
  for(int i = 1; i < tamanhoDoArray; i++){
    if(array[i] > maior){
      maior = array[i];
    }
  }
  printf("O maior numero do vetor eh: %d\n", maior);

  //Divide cada elemento do vetor.
  for(int z = 0; z < tamanhoDoArray; z++){
     divisao = (float)array[z] / maior;
     printf("Elemento normalizado: %.2f\n",divisao);
  }

  for(int n = 0; n < tamanhoDoArray; n++){
    printf("array[%d] = %.2f\n", n , array[n]);
  }


  return 0;
}