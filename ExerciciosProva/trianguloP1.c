#include <stdio.h>
int main(){
  int r, i, j, n= 1;
  scanf("%d",&r);
  for(i=r; i > 1; i--){
    for(j=1; j < i; ++j)
      printf("%d ",r+j-i+1);
    printf("\n");
  }
  return 0;
}
