#include <stdio.h>

int main(){

  int x = 10;

  int *ponteiro;
  ponteiro = &x;

  printf("%d\n", *ponteiro);

  return 0;
}