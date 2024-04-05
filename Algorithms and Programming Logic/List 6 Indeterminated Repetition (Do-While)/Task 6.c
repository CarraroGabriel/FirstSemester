// Exercício 6
// Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% e que a população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%.
// Faça um programa que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.

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

  printf("Em %i anos o país A irá ultrapassar ou igualar o país B", anos);

  return 0;
}
