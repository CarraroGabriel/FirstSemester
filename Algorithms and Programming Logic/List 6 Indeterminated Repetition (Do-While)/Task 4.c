// Exerc�cio 4
// Fa�a um programa que leia um nome de usu�rio e a sua senha e n�o aceite a senha igual ao nomedo usu�rio, mostrando uma mensagem de erro e voltando pedir as informa��es.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {	
  char usuario[50], senha[50];
  setlocale(LC_ALL,"");

  printf("Nome de usu�rio: ");
  scanf("%s", usuario);

  printf("Senha: ");
  scanf("%s", senha);

  while (strcmp(usuario, senha) == 0) {
    printf("Erro! A senha n�o pode ser igual ao nome de usu�rio!\n");
    printf("Digite novamente as informa��es: \n");

    printf("Nome de usu�rio: ");
    scanf("%s", usuario);

    printf("Senha: ");
    scanf("%s", senha);
  }

  return 0;
}
