// Exercício 10
// Elabore um algoritmo que pede  ao  usuários  números  até que seja digitado  um  valor  negativo,  ao  final  do programa  mostre  os  seguintes resultados:
// a) o maior valor
// b) o menor valor
// c) a soma dos valores pares
// d) a média dos valores ímpares
// e) quantos números maiores a 50
// f) a percentagem de valores maiores que 20
// g) a média dos valores pares que estão entre 50 e 150
// h) o total de valores digitados

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int i = 0, num, maior, menor, soma_par = 0, soma_impar = 0, count_maior_50 = 0, count_maior_20 = 0, count_entre_50_e_150 = 0, count_total = 0;

  float media_impar, media_entre_50_e_150;

  do {
    printf("Informe o número (%i): ", i + 1);
    scanf("%i", &num);

    if (i == 0) {
      maior = num;
      menor = num;
    }

    if (n > maior) {
      maior = num;
    }

    if (n < menor) {
      menor = num;
    }

    if (n % 2 == 0) {
      soma_par += num;
    } else {
      soma_impar += num;
    }

    if (n > 50) {
      count_maior_50++;
    }

    if (n > 20) {
      count_maior_20++;
    }

    if (n >= 50 && n <= 150) {
      count_entre_50_e_150++;
    }

    count_total++;

    i++;
  } while (num >= 0);

  media_impar = (float)soma_impar / (count_total - count_maior_50);

  media_entre_50_e_150 = (float)soma_par / count_entre_50_e_150;

  printf("\n");

  printf("Maior valor: %i\n", maior);
  printf("Menor valor: %i\n", menor);
  printf("Soma dos valores pares: %i\n", soma_par);
  printf("Média dos valores impares: %.2f\n", media_impar);
  printf("Quantidade de números maiores que 50: %i\n", count_maior_50);
  printf("Porcentagem de valores maiores que 20: %.2f%%\n", (float)count_maior_20 / count_total * 100);
  printf("Média dos valores pares que estão entre 50 e 150: %.2f\n", media_entre_50_e_150);
  printf("Total de valores digitados: %i\n", count_total);

  return 0;
}
