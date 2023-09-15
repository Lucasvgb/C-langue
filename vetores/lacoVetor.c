#include <stdio.h>

int main() {
  int n;

  printf("Digite o numero do vetor: ");
  scanf("%d", &n);

  int vet[n];

  for (int i = 0; i < n; i++) {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%d", &vet[i]);
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", vet[i]);
  }

  return 0;
}