#include <stdio.h>

int main()
{
/* Desenvolver um programa que leia um número inteiro e verifique se o número é divisível por três e
também é divisível por cinco.
Entrada
O programa deve ler uma linha contendo um número inteiro na entrada.
Saída
O programa deve imprimir uma linha contendo a frase: O NUMERO E DIVISIVEL, se ele for divisível
tanto por três quanto por cinco, ou a frase O NUMERO NAO E DIVISIVEL, em caso contrário. Após
imprimir uma das frases, o programa deve imprimir um caractere de quebra de linha: ‘\n */

int numero;

scanf("%i" , &numero);

    if (numero % 3 == 0 || numero % 5 == 0){
        printf("O NUMERO E DIVISIVEL\n");
    } else { printf("O NUMERO NAO E DIVISIVEL\n");}

 return 0;
 
 }