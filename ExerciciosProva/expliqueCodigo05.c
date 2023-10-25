
#include <stdio.h>
int main(){
  int n1, n2, M, cond=1;
  printf("Digite dois inteiros: ");
  scanf("%d %d", &n1, &n2);
  if (n1<n2) M = n1;
  else M = n2;
  while(cond){
    if( n1%M==0 && n2%M==0 ){
      printf("Resposta: %d.\n",M);
      cond=0;
      }
      M--;
    }
  return 0;
}
