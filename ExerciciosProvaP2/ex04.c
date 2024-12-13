/*
Questão 4. Explique o que o programa abaixo faz. Qual a saída do programa para a entrada 3<enter>5<enter>? Quantas vezes a função f é chamada, neste caso?
*/
#include <stdio.h>

int f(int n1, int n2);

int main()
{
    int b, p, resultado;
    scanf("%d",&b);
    scanf("%d",&p);
    resultado = f(b,p);
    printf("%d\n",resultado);
    return 0;
}

int f(int b, int p)
{
    if (p != 0)
        return (b*f(b,p-1));
    else
        return 1;
}
