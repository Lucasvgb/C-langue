/*
Implementação de uma lista encadeada simples.
*/

#include <stdio.h>
#include <stdlib.h>

  /*
  1.Define uma estrutura chamada no que contém um inteiro dado, e um ponteiro para a próxima estrutura no na lista, chamado proximo.
  */
  struct no {
  int dado;
  struct no *proximo;
  };

  // variável global chamada inicio que é um ponteiro para a estrutura no e é inicializado como NULL, indicando uma lista vazia.
  struct no *inicio = NULL;

  /*
  Função mL (Mostrar Lista):
    1. mL(): Exibe os elementos da lista encadeada.
    2.Inicia com um ponteiro ptr apontando para o início da lista.
    3. Percorre a lista e imprime os valores dos nós.
    4. Termina com a indicação [null] para representar o final da lista.
  */
  void mL() {
  struct no *ptr = inicio;
  int i = 0;
  printf("\n[inicio] =>");
  while(ptr != NULL) {
  printf(" %d =>",ptr->dado);
  ptr = ptr->proximo;
  i++;
 }
 printf(" [null]\n");
}
  /*
  Função iiL (Inserir no Início da Lista):
    1. iiL(int dado): Insere um novo nó no início da lista.
    2. Aloca dinamicamente um novo nó (novo).
    3. Percorre a lista até o final.
    4. Define o dado do novo nó e ajusta os ponteiros para inserir no início.
  */
  void iiL(int dado) {
    struct no *novo = (struct no*) malloc(sizeof(struct no));
    struct no *ptr = inicio;
    while(ptr != NULL) {
    ptr = ptr->proximo;
  }
    novo->dado = ptr;
    novo->proximo = inicio;
    inicio = novo;
}
  /*
  Na função principal (main), são feitas chamadas para iiL() para inserir números na lista.
  Em seguida, mL() é chamada para mostrar o estado atual da lista.
  */
int main() {
 iiL(13);
 iiL(11);
 iiL(7);
 iiL(5);
 iiL(3);
 iiL(2);
 mL();
 return 0;
}
