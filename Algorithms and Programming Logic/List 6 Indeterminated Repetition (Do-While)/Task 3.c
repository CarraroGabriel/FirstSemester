// Exerc�cio 3
// Fa�a um programa que pe�a uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inv�lido econtinue pedindo at� que o usu�rio informe um valor v�lido.

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
      printf("Nota inv�lida!\n");
  } while (nota < 0 || nota > 10);

  return 0;
}
