// Exerc�cio 6
// Fa�a um programa em C que leia o dia e o m�s de nascimento de uma pessoa e o seu nome, ap�s escreva o Nome e o signo dela de acordo com a tabela abaixo (a tabela n�o ser� exibida):
// Nascidos entre:                            Signo:
// 20/03 a 20/04                              �ries
// 21/04 a 20/05                              Touro
// 21/05 a 20/06                              G�meos
// 21/06 a 21/07                              C�ncer
// 22/07 a 22/08                              Le�o
// 23/08 a 22/09                              Virgem
// 23/09 a 22/10                              Libra
// 23/10 a 21/11                              Escorpi�o
// 22/11 a 21/12                              Sagit�rio
// 22/12 a 20/01                              Capric�rnio
// 21/01 a 18/02                              Aqu�rio
// 19/02 a 19/03                              Peixes

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");

int dia,mes;
printf("Digite seu dia de nascimento: ");
scanf("%i",&dia);

printf("Digite seu m�s de nascimento: ");
scanf("%i",&mes);

 if (((mes == 12) && ((dia >= 22) && (dia <= 31))) ||
      ((mes == 1)  && ((dia >= 1)  && (dia <= 20))))
     printf("\nCapric�rnio.");
  else if (((mes == 1) && ((dia >= 21) && (dia <= 31))) ||
           ((mes == 2) && ((dia >= 1)  && (dia <= 19))))
          printf("\nAqu�rio.");
  else if (((mes == 2) && ((dia >= 20) && (dia <= 29))) ||
           ((mes == 3) && ((dia >= 1)  && (dia <= 20))))
          printf("\nPeixes.");
  else if (((mes == 3) && ((dia >= 21) && (dia <= 31))) ||
           ((mes == 4) && ((dia >= 1)  && (dia <= 20))))
          printf("\n�ries.");
  else if (((mes == 4) && ((dia >= 21) && (dia <= 30))) ||
           ((mes == 5) && ((dia >= 1)  && (dia <= 20))))
          printf("\nTouro.");
  else if (((mes == 5) && ((dia >= 21) && (dia <= 31))) ||
           ((mes == 6) && ((dia >= 1)  && (dia <= 20))))
          printf("\nG�meos.");
  else if (((mes == 6) && ((dia >= 21) && (dia <= 30))) ||
           ((mes == 7) && ((dia >= 1)  && (dia <= 21))))
          printf("\nC�ncer.");
  else if (((mes == 7) && ((dia >= 22) && (dia <= 31))) ||
           ((mes == 8) && ((dia >= 1)  && (dia <= 22))))
          printf("\nLe�o.");
  else if (((mes == 8) && ((dia >= 23) && (dia <= 31))) ||
           ((mes == 9) && ((dia >= 1)  && (dia <= 22))))
          printf("\nVirgem.");
  else if (((mes == 9)  && ((dia >= 23) && (dia <= 30))) ||
           ((mes == 10) && ((dia >= 1)  && (dia <= 22))))
          printf("\nLibra.");
  else if (((mes == 10) && ((dia >= 23) && (dia <= 31))) ||
           ((mes == 11) && ((dia >= 1)  && (dia <= 21))))
          printf("\nEscorpi�o.");
  else if (((mes == 11) && ((dia >= 22) && (dia <= 30))) ||
           ((mes == 12) && ((dia >= 1)  && (dia <= 21))))
          printf("\nSagit�rio.");
       else
       
          printf("\nDia ou m�s de nascimento inv�lidos !!!");

system("pause");
return 0;
}
