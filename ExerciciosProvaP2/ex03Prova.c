/*
Questão 3 (3,5pt). No programa abaixo, o uso do registro struct fracao viola o conceito
de “Tipo Abstrato de Dados” porque o acesso ao registro demanda conhecimento de sua
implementação (campo valor como um vetor de duas posições). Rescreva o código abaixo de
tal forma a resolver tal violação à abstração de dados.

#include<stdio.h>
#define NUM 0
#define DEN 1
struct fracao{
 int valor[2];
};
int main(void){
 struct fracao f;
 printf("Digite o numerador (inteiro): ");
 scanf("%d",&f.valor[NUM]);
 printf("Digite o denominador (inteiro): ");
 scanf("%d",&f.valor[DEN]);
 printf("\n Sua fração é
%d/%d\n\n",f.valor[NUM],f.valor[DEN]);
}

*/

#include<stdio.h>

  /*
  Aqui, uma estrutura chamada fracao é definida. Essa estrutura tem um array de inteiros chamado valor com dois elementos. O primeiro elemento é o numerador, e o segundo é o denominador.
  */
  struct fracao
  {
    int valor[2];
  };

  /*
  Esta função inicializa uma fração, recebendo um ponteiro para uma estrutura fracao (struct fracao *f), um numerador e um denominador. Ela atribui os valores recebidos ao array valor da estrutura.
  */
  void iniciarFracao(struct fracao *f, int numerador, int demoninador)
  {
    f -> valor[0] = numerador;
    f -> valor[1] = demoninador;   
  }

  int Ret_Numerador(struct fracao f)
  {
    return f.valor[0];
  }

   int Ret_Denominador(struct fracao f)
  {
    return f.valor[1];
  }


int main(){

 struct fracao f;
 int num,den;

 printf("Digite o numerador (inteiro): ");
 scanf("%d",&num);

 printf("Digite o denominador (inteiro): ");
 scanf("%d",&den);

 iniciarFracao(&f,num,den);
 printf("\n Sua fracao eh %d/%d\n\n",Ret_Numerador(f),Ret_Denominador(f));

}
