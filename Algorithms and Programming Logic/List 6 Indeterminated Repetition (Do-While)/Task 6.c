// Exerc�cio 6
// Supondo que a popula��o de um pa�s A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% e que a popula��o de B seja 200000 habitantes com uma taxa de crescimento de 1.5%.
// Fa�a um programa que calcule e escreva o n�mero de anos necess�rios para que a popula��o do pa�s A ultrapasse ou iguale a popula��o do pa�s B, mantidas as taxas de crescimento.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int anos = 0, popA = 80000, popB = 200000;
  float crescA = 0.03, crescB = 0.015;

  do {
    popA += popA * crescA;
    popB += popB * crescB;
    anos++;
  } while (popA <= popB);

  printf("Em %i anos o pa�s A ir� ultrapassar ou igualar o pa�s B", anos);

  return 0;
}
