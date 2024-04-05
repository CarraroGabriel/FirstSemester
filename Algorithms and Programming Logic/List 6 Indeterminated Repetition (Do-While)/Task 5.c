// Exercício 5
// Faça um programa que leia as seguintes informações:
// Nome: maior que 3 caracteres;
// Idade: entre 0 e 150;
// Salário: maior que zero;
// Sexo: 'f' ou 'm';
// Estado Civil: 's', 'c', 'v', 'd';

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
  setlocale(LC_ALL,"");
  char nome[25] = " ", sexo, civil;
  int idade, um = 1, count;
  float salario;

  do {
    do {
      printf("\nNome: ");
      scanf("%s", &nome);
      fflush(stdin);

      if (strlen(nome) < 3) printf("Nome inválido!");
    } while (strlen(nome) < 3);

    do {
      printf("\nIdade:");
      scanf("%i", &idade);
      if (idade < 0 || idade > 150) printf("Idade inválida!");
    } while (idade < 0 || idade > 150);

    do {
      printf("\nSalário:");
      scanf("%f", &salario);
      fflush(stdin);
      if (salario <= 0) printf("Salário inválido!");
    } while (salario <= 0);

    do {
      printf("\nSexo:");
      scanf(" %c", &sexo);
      fflush(stdin);
      if (sexo != 'f' && sexo != 'm') printf("Sexo inválido!");
    } while (sexo != 'f' && sexo != 'm');

    while (um == 1) {
      printf("\nEstado civil:");
      scanf("%c", &civil);
      fflush(stdin);
      if (civil == 's' || civil == 'c' || civil == 'v' || civil == 'd')
        break;
      else
        printf("Estado Civil inválido!");
    }

    printf("\nNome: %s Idade: %i Salário: %.2f Sexo: %c Estado Civil: %c", nome, idade, salario, sexo, civil);
    printf("\n Tecle 1 para continuar 2-sair)");
    scanf("%i", &count);
  } while (count == 1);
}
