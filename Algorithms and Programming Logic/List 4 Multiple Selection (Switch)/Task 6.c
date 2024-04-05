// Exercício 6
// Faça um programa em que leia o nome e a idade de 4 alunos de uma turma e escreva o nome e a idade do mais velho. Utilize uma mensagem adequada.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
  setlocale(LC_ALL,"");
  int idade, maisVelho = 0;
  char nome[50], nomeVelho[50];

  for (int i = 0; i < 4; i++) {
    printf("\nDigite seu nome e idade: ");
    scanf("%s %d", name, &idade);

    if (idade > maisVelho) {
      maisVelho = idade;
      strcpy(nomeVelho, nome);
    }

    if(i == 3) printf("\nO aluno mais velho é %s com %d anos", nomeVelho, maisVelho);
  }

  return 0;
}
