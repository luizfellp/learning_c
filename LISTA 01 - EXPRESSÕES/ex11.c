#include <stdio.h>
#include <math.h>

int main ()
{
    /* O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor
e dos impostos (aplicados ao custo de fábrica). Supondo que a porcentagem do distribuidor seja de x% do
preço de fábrica e os impostos de y% do preço de fábrica, fazer um programa para ler o custo de fábrica
de um carro, a percentagem do distribuidor e o percentual de impostos, calcular e imprimir o custo final do
carro ao consumidor.
Entrada
O programa deve ler três valores na entrada: o preço de fábrica do carro, o percentual do distribuidor e
o percentual de impostos. Cada valor aparece em uma linha de entrada. Todos os valores são do tipo float.
Saída
O programa deve imprimir uma linha, contento a frase O VALOR DO CARRO E = Z, onde Z é o valor
do preço final do carro ao consumidor. O valor de Z deve ter duas casas decimais. Após imprimir o valor
do preço final, o program deve imprimir o caractere de quebra de linha ‘\n’.*/

float custofab, taxdis1, taxdis2, taxgeral1 , taxgeral2, valorfinal;

printf ("Informe o preço de fábrica do veículo:");
scanf ("%f" , &custofab);
printf ("Informe o percentual do distribuidor:");
scanf ("%f" , &taxdis1);
printf ("Informe o percentual dos impostos:");
scanf ("%f" , &taxgeral1);

taxdis2= (custofab/100)*taxdis1;
taxgeral2= (custofab/100)*taxgeral1;
valorfinal=custofab+taxdis2+taxgeral2;

printf ("O VALOR DO CARRO E = %.2f \n" , valorfinal);

    return 0;
}