// Exercício 17
// Faça um programa para ler a idade de 5 alunos e mostrar um mensagem ao final de acordo com as instruções:
// - se a média de idade dos alunos for inferior de 25, apresentar a mensagem "Turma Jovem" e a idade de cada aluno; 
// - se a média de idade dos alunos está entre 25 e 40, apresentar a mensagem "Turma Adulta" e a média das idades; 
// - se a média de idade dos alunos está acima de 40 anos, apresentar a mensagem "Turma Idosa", mostrar a média das idades e a idade de cada aluno.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"");
  int idade, soma_idades = 0, media_idades;
  int idades[5];

  for (int i = 0; i < 5; i++) {
    printf("Digite a idade do aluno %i: ", i + 1);
    scanf("%i", &idade);

    soma_idades += idade;
    idades[i] = idade;
  }

  media_idades = soma_idades / 5;

  if (media_idades < 25) {
    printf("Turma Jovem\n");
    
    printf("\nMédia das idades: %i\n", media_idades);

    for (int i = 0; i < 5; i++) {
      printf("Idade do aluno %i: %i\n", i + 1, idades[i]);
    }
  } else if (media_idades >= 25 && media_idades <= 40) {
    printf("Turma Adulta\n");
    
    printf("\nMédia das idades: %i\n", media_idades);
    
    for (int i = 0; i < 5; i++) {
      printf("Idade do aluno %i: %i\n", i + 1, idades[i]);
    }
  } else {
    printf("\nTurma Idosa");
    
    printf("\nMédia das idades: %i\n", media_idades);
    
    for (int i = 0; i < 5; i++) {
      printf("Idade do aluno %i: %i\n", i + 1, idades[i]);
    }
  }

  return 0;
}
