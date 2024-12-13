/*
Questão 3. Explique o que o programa abaixo faz. Qual a saída do programa para a entrada 11<enter>5<enter>? Enumere as instâncias de chamadas da função f, apresentando, para cada instância, os parâmetros b e p correspondentes.

*/
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
