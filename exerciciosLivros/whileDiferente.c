#include <stdio.h>
#include <stdlib.h>

int main(){

/*
Esse código economiza uma instrução, porque o incremento é feito diretamente na condição do while, antes que a condição seja testada. Assim, o código elimina a necessidade das chaves em torno do corpo do while.A codificação nessa forma condensada exige um pouco de prática. Alguns programadores acham que isso torna o código muito enigmático
e passível de erros.
*/
int contador = 0;

while (++contador <= 10 )
  printf("%d\n", contador );


  return 0;
}