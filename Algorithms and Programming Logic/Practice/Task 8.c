// Exerc�cio 8
// Fa�a um algoritmo que leia as seguintes informa��es de um grupo indeterminado de produtos (c�digo, quantidade, tipo e valor), sendo que o programa termina quando o c�digo do produto for zero. 
// Fazer a valida��o de todos os dados de entrada conforme tabela abaixo. 
// No final, mostrar a quantidade de produtos cadastrados, o valor total de produtos perec�veis e n�o perec�veis.
// C�digo do produto: >0
// Quantidade: >0 e < 100
// Tipo: 1- Perec�vel 2- N�o Perec�vel 3-Congelado
// Valor: >0

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
    int codigo, quantidade, tipo, produtos_cadastrados = 0;
    float valor, valor_pereciveis = 0, valor_nao_pereciveis = 0, valor_congelados = 0;
    
    do {
        printf("Digite o c�digo do produto (ou 0 para sair): ");
        scanf("%i", &codigo);

        if (codigo == 0) {
            break;
        }

        printf("Digite a quantidade: ");
        scanf("%i", &quantidade);

        if (quantidade <= 0 || quantidade >= 100) {
            printf("Quantidade inv�lida! Deve ser maior que zero e menor que 100.\n");
            continue;
        }

        printf("Digite o tipo (1-Perec�vel, 2-N�o Perec�vel, 3-Congelado): ");
        scanf("%i", &tipo);

        if (tipo < 1 || tipo > 3) {
            printf("Tipo inv�lido. Digite novamente um valor de 1 at� 3.\n");
            continue;
        }

        printf("Digite o valor: ");
        scanf("%f", &valor);

        if (valor <= 0) {
            printf("Valor inv�lido. Deve ser maior que zero.\n");
            continue;
        }

        produtos_cadastrados++;

        if (tipo == 1) {
            valor_pereciveis += valor;
        } else if (tipo == 2) {
            valor_nao_pereciveis += valor;
        }
        else if (tipo == 3) {
			valor_congelados += valor;
		}
    } while(codigo != 0);

    printf("Quantidade de produtos cadastrados: %i\n", produtos_cadastrados);
    printf("Valor total de produtos perec�veis: R$%.2f\n", valor_pereciveis);
    printf("Valor total de produtos n�o perec�veis: R$%.2f\n", valor_nao_pereciveis);
	printf("Valor total de produtos congelados: R$%.2f\n", valor_congelados);
	
	system ("pause");
    return 0;
}
