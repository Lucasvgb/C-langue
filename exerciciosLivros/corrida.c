int main (){

  int caminho;

  printf("Digite o primeiro caminho\n");
  scanf("%d", &caminho);
  
  if(caminho == 1 ){
    printf("Booa, você está perto, agora digite outro numero para continuar: ");
    scanf("%d",&caminho);
    if(caminho == 4){
      printf("Boaa, agora você está mais perto,digitre outro numero para continuar: ");
      if(caminho == 6){
        printf("VOCE CHEGOU\n");
      }
    }
    else{
        printf("caminho invalido\n");
    }
  }
  else if(caminho == 2){
    printf("caminho VALIDO, POREM invalido\n");
  }


  return 0;
}