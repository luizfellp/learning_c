#include <stdio.h>

int main()
{
/* Escreva um algoritmo que leia 3 números reais em qualquer ordem e os apresente de forma ordenada
na tela.
Entrada
O programa deve ler 3 valores reais.
Saída
O programa deve imprimir uma linha contento a lista ordenada de números separados por vírgula e
espaço, cada número com 2 casas decimais.*/

float num1, num2, num3, temp;

 scanf("%f %f %f" , &num1, &num2, &num3);
 
 if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;}

    printf ("%.2f %.2f %.2f" , num1, num2, num3);

 return 0;
 }