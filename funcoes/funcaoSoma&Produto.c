#include <stdio.h>

int soma;
int produto;

int main (){

  int x;
  int y;
  int somaProduto(int a, int b);

  scanf("%d %d", &x, &y);
  somaProduto(x,y);

  printf("Soma = %d Produto = %d\n", soma, produto);

  return 0;
}

int somaProduto(int a, int b){

  soma = a + b;
  produto = a * b;

  return soma,produto;
}