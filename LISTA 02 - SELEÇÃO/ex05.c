#include <stdio.h>

int main()
{
/* Uma locadora de charretes cobra R$ 10,00 de taxa para cada 3 horas de uso de uma charrete e R$5,00
para cada 1 hora abaixo dessas 3 horas. Fazer um programa que leia a quantidade de horas que a charrete
foi usada e que calcule e escreva quanto o cliente tem de pagar.
Entrada
O programa deve ler uma única linha na entrada, contendo o número de horas que o locatário utilizou a
charrete.
Saída
O programa deve imprimir uma linha contendo a frase: O VALOR A PAGAR E = X, onde X é o valor
do aluguel e deve conter no máximo 2 casas decimais. Após o valor do aluguel o programa deve imprimir
um caractere de quebra de linha: ‘\n*/

int tempoCharrete,tempoCharrete2;
float tempoCharrete3;

scanf("%i", &tempoCharrete);

if (tempoCharrete <=3){
    tempoCharrete2=tempoCharrete*5;
} else { tempoCharrete2= ((tempoCharrete-3)*3.30) + 15.00;}

tempoCharrete3=tempoCharrete2;

printf ("%.2f" , tempoCharrete3);

 return 0;
 
 }