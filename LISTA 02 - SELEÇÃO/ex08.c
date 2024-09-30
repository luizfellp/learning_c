#include <stdio.h>

int main()
{
/* Desenvolver um algoritmo para ler um número x, calcular e imprimir o valor de y de acordo com as
condições abaixo:
y =
x, se x < 1;
0, se x = 1;
x2, se x > 1;
Entrada
O programa deve ler uma linha contendo um único número inteiro correspondendo ao valor de x.
Saída
O programa deve imprimir Y = y, onde y é o valor computado de y dado x. Após o valor de y, o programa
deve imprimir um caractere de quebra de linha: ‘\n*/

int num,num2;

scanf("%i" , &num);

if(num <1){
        printf("Y = %i\n", num);} 

if (num==1){
        num=0;
        printf("Y = %i\n", num);}

if (num >1){
        num2=num*num;
        printf("Y = %i\n", num2);}


 return 0;
 
 }