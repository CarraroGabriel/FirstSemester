// Exercício 2
// Faça um algoritmo que leia as notas de 10 alunos e no final escreva a maior e a menor nota, assim como a média dos alunos com nota maior que 6 e dos alunos menores que 6.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
    float soma_acima_seis = 0, soma_abaixo_seis = 0;
    int notas[10], maior = -1, menor = 11, contador_acima_seis = 0, contador_abaixo_seis = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%i", &notas[i]);

        if (notas[i] > maior) {
            maior= notas[i];
        }
        if (notas[i] < menor) {
            menor = notas[i];
        }

     
        if (notas[i] > 6) {
            soma_acima_seis += notas[i];
            contador_acima_seis++;
        } else {
            soma_abaixo_seis += notas[i];
            contador_abaixo_seis++;
        }
    }

    printf("Maior nota: %i\n", maior);
    printf("Menor nota: %i\n", menor);

    if (contador_acima_seis > 0) {
        float media_acima_seis = soma_acima_seis / contador_acima_seis;
        printf("Média das notas acima de 6: %.2f\n", media_acima_seis);
    } else {
        printf("Nenhum aluno obteve nota acima de 6.\n");
    }

    if (contador_abaixo_seis > 0) {
        float media_abaixo_seis = soma_abaixo_seis / contador_abaixo_seis;
        printf("Média das notas abaixo de 6: %.2f\n", media_abaixo_seis);
    } else {
        printf("Nenhum aluno obteve nota abaixo de 6.\n");
    }

    return 0;
}

