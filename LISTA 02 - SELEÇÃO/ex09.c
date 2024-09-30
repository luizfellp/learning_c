#include <stdio.h>

int main()
{
/* Escreva um algoritmo que leia um ano e imprima na tela se o ano lido é bissexto ou não. Um ano é
bissexto se ele for múltiplo de 4, exceto quando ele for múltiplo de 100. Os anos múltiplos de 100 somente
são bissextos quando são múltiplos de 400. Podem ser anos bissextos somente os anos maiores que 1582.
Entrada
O programa deve ler um número inteiro.
Saída
O programa deve imprimir a mensagem: "ANO BISSEXTO"caso o ano seja bissexto ou "ANO NAO
BISSEXTO"caso contrário*/

int ano;

scanf("%i", &ano);

if (ano%4==0 && ano%100!=0 || ano%100==0 && ano%400==0){
    printf("ANO BISSEXTO");
}
else {
    printf("ANO NÃO BISSEXTO");
}


 return 0;
 
 }