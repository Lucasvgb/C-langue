/*
Questão. Explique o que o programa abaixo faz. Qual a saída do programa para a
entrada 1 <enter> 1 <enter>.  E para a entrada 2 e 3 e 4 ?
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i, *ptr, sum = 0;
  scanf("%d", &n);
  ptr = (int*) calloc(n, sizeof(int));

  for(i = 0; i < n ; ++i)
  {
    scanf("%d", ptr + i);
    sum += *(ptr + i);
  }
    printf("%d", sum);
    free(ptr);

return 0;
}