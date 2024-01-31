#include <stdio.h>
#include <string.h>

int calculaTamanho(char* palavra) {
  int tam = 0;
  while (palavra[tam] != '\0') {
    tam++;
  }
  return tam;
}

void rotPalavra(char* palavra) {
  int tamanho;
  tamanho = calculaTamanho(palavra);
  char primeiroCarac = palavra[0];

  for (int i = 0; i < tamanho; i++) {
    palavra[i] = palavra[i + 1];
  }
  palavra[tamanho - 1] = primeiroCarac;
}

int main() {
  char palavra[50];
  scanf("%s", palavra);
  rotPalavra(palavra);
  printf("%s\n", palavra);
  return 0;
}
