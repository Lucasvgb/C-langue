
/*
Questões envolvendo Vetores

Questão. Escreva um programa em C que faça o seguinte:
1) leia 10 números inteiros,
2) armazene estes números em um vetor,
3) calcule a média dos valores do vetor,
4) divida cada elemento do vetor pela média calculada na etapa 3, e
5) imprima cada um dos elementos, separados por vírgula, e com ponto final após
o último elemento (exemplo: “2,5,4,7,9.”).
*/

int main(){

  int array [10];
  int soma = 0;

  int tamanhoDoArray = sizeof(array) / sizeof(array[0]);

  //Lê o vetor
  for(int i = 0; i <= tamanhoDoArray ; i++){
    printf("Digite um valor para o array[%d]: ", i);
    scanf("%d", &array[i]);
  }

  //Soma os elementos do Vetor
  for(int k = 0; k < tamanhoDoArray; k++){
    soma = soma + array[k];
  }

  //Calcula a media do vetor.
  float media = (float)soma / tamanhoDoArray;

  //Divide o elemento do vetor sobre a media calculada
  for(int z = 0; z < tamanhoDoArray; z++ ){
    array[z] /= media;
  }

  //Imprime o vetor
  for(int j = 0; j < tamanhoDoArray ; j++){
    printf("array[%d] = %d\n", j , array[j]);
  }

  //Imprime a media do vetor.
  printf("Media: %.2f\n", media); // %.2f para imprimir a média com 2 casas decimais

  return 0;
}