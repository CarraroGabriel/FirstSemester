// Exerc�cio 15
//  Escreva um programa que l� 10 valores inteiros e os armazena em um vetor. O programa deve trocar valores no vetor conforme as duas posi��es especificadas pelo n�meros digitados pelo usu�rio. 
// As posi��es especificadas pelo usu�rio correspondem aos �ndices do vetor. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 10

int main() {
  setlocale(LC_ALL,"");
  int x[tam] = {0}, aux = 0, pos1 = 0, pos2 = 0;

  for (int i = 0; i < tam; i++) {
    scanf("%d", &x[i]);
  }

  printf("\nEscolha as posi��es que deseja trocar:");
  printf("\nPosi��o de origem\n");
  scanf("%d", &pos1);
  printf("\nPosi��o de destino\n");
  scanf("%d", &pos2);

  aux = x[pos1];
  x[pos1] = x[pos2];
  x[pos2] = aux;

  printf("\nVetor com as posi��es trocadas:\n");
  for (int i = 0; i < tam; i++) {
    printf("%d ", x[i]);
  }

  return 0;
}
