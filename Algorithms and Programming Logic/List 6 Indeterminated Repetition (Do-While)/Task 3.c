// Exercício 3
// Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido econtinue pedindo até que o usuário informe um valor válido.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int nota;

  do {
    printf("Digite uma nota entre 0 e 10: ");
    scanf("%d", &nota);

    if (nota < 0 || nota > 10)
      printf("Nota inválida!\n");
  } while (nota < 0 || nota > 10);

  return 0;
}
