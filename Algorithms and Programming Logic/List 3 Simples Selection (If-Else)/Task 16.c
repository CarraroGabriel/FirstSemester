// Exercício 16
// Faça um algoritmo que leia o número de gols marcados pelo Grêmio e número de gols marcados pelo Inter em um Gre-nal. 
// Mostre na tela o nome do vencedor e quantos gols o time vencedor fez a mais. 
// Caso não haja vencedor, mostre na tela o total de gols de cada time com a mensagem: EMPATE

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"");
  int gremio, inter;

  printf("Digite os gols do Grêmio: ");
  scanf("%d", &gremio);
  printf("Digite os gols do Internacional: ");
  scanf("%d", &inter);

  if (gremio > inter) {
    printf("O Grêmio venceu com %d gol(s) de diferenca\n", gremio - inter);
  } else if (inter > gremio) {
    printf("O Interncional venceu com %d gol(s) de diferenca\n", inter - gremio);
  } else {
    printf("Empate\n");
  }

  return 0;
}
