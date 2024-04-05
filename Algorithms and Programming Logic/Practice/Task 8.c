// Exercício 8
// Faça um algoritmo que leia as seguintes informações de um grupo indeterminado de produtos (código, quantidade, tipo e valor), sendo que o programa termina quando o código do produto for zero. 
// Fazer a validação de todos os dados de entrada conforme tabela abaixo. 
// No final, mostrar a quantidade de produtos cadastrados, o valor total de produtos perecíveis e não perecíveis.
// Código do produto: >0
// Quantidade: >0 e < 100
// Tipo: 1- Perecível 2- Não Perecível 3-Congelado
// Valor: >0

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
    int codigo, quantidade, tipo, produtos_cadastrados = 0;
    float valor, valor_pereciveis = 0, valor_nao_pereciveis = 0, valor_congelados = 0;
    
    do {
        printf("Digite o código do produto (ou 0 para sair): ");
        scanf("%i", &codigo);

        if (codigo == 0) {
            break;
        }

        printf("Digite a quantidade: ");
        scanf("%i", &quantidade);

        if (quantidade <= 0 || quantidade >= 100) {
            printf("Quantidade inválida! Deve ser maior que zero e menor que 100.\n");
            continue;
        }

        printf("Digite o tipo (1-Perecível, 2-Não Perecível, 3-Congelado): ");
        scanf("%i", &tipo);

        if (tipo < 1 || tipo > 3) {
            printf("Tipo inválido. Digite novamente um valor de 1 até 3.\n");
            continue;
        }

        printf("Digite o valor: ");
        scanf("%f", &valor);

        if (valor <= 0) {
            printf("Valor inválido. Deve ser maior que zero.\n");
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
    printf("Valor total de produtos perecíveis: R$%.2f\n", valor_pereciveis);
    printf("Valor total de produtos não perecíveis: R$%.2f\n", valor_nao_pereciveis);
	printf("Valor total de produtos congelados: R$%.2f\n", valor_congelados);
	
	system ("pause");
    return 0;
}
