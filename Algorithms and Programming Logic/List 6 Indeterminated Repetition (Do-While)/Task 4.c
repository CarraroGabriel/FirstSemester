// Exercício 4
// Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nomedo usuário, mostrando uma mensagem de erro e voltando pedir as informações.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {	
  char usuario[50], senha[50];
  setlocale(LC_ALL,"");

  printf("Nome de usuário: ");
  scanf("%s", usuario);

  printf("Senha: ");
  scanf("%s", senha);

  while (strcmp(usuario, senha) == 0) {
    printf("Erro! A senha não pode ser igual ao nome de usuário!\n");
    printf("Digite novamente as informações: \n");

    printf("Nome de usuário: ");
    scanf("%s", usuario);

    printf("Senha: ");
    scanf("%s", senha);
  }

  return 0;
}
