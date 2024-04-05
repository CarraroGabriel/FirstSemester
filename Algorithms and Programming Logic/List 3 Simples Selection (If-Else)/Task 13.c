// Exercício 13
// Um radar de trânsito faz a medição de velocidade dos veículos e, dependendo da velocidade, calcula a multa a ser aplicada. 
// Em uma determinada via, esse radar foi configurado da seguinte forma: - se a velocidade for maior que 80km/h, a multa é de R$360,00
// - se a velocidade for maior que 60km/h, a multa é de R$180,00 
// - se a velocidade for menor ou igual a 60km/h, não há multa.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"");
  int velocidade;

  scanf("%i", &velocidade);

  if(velocidade <= 60)
    return printf("Não há multa");
    
  if(velocidade > 60 && velocidade <= 80)
    return printf("Multa de: R$180,00");
    
  if(velocidade > 80)
    return printf("Multa de: R$360,00");

  return 0;
}
