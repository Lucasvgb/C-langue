#include <stdio.h>

  int f(int b, int p){
    if (p > 0 && b > 0)
      return ((b-1)*f(b,p-2));
    else
      return 1;
  }
  int main(){
    int b, p, resultado;
    scanf("%d",&b);
    scanf("%d",&p);
    resultado = f(b,p);
    printf("%d\n",resultado);
    return 0;
}
