/*
O valor de a é 33, enquanto o valor de b também é 33. Isso ocorre porque p aponta para b na última atribuição *p = a * b, e, portanto, a modificação de p também afeta o valor de b.
*/
#include <stdio.h>

int main() {
  int a, b;
  int *p, *q;
  b = 33;
  p = &a;
  q = p;
  p = &b;
  *q = 11;
  *p = 39;
  *p = a*b;
  printf("a = %d\n", a );
  printf("b = %d\n", b );
  
  return 0;
}