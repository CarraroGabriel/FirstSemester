// Exerc�cio 16
// Fa�a um algoritmo que leia o n�mero de gols marcados pelo Gr�mio e n�mero de gols marcados pelo Inter em um Gre-nal. 
// Mostre na tela o nome do vencedor e quantos gols o time vencedor fez a mais. 
// Caso n�o haja vencedor, mostre na tela o total de gols de cada time com a mensagem: EMPATE

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"");
  int gremio, inter;

  printf("Digite os gols do Gr�mio: ");
  scanf("%d", &gremio);
  printf("Digite os gols do Internacional: ");
  scanf("%d", &inter);

  if (gremio > inter) {
    printf("O Gr�mio venceu com %d gol(s) de diferenca\n", gremio - inter);
  } else if (inter > gremio) {
    printf("O Interncional venceu com %d gol(s) de diferenca\n", inter - gremio);
  } else {
    printf("Empate\n");
  }

  return 0;
}
