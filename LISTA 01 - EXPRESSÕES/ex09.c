#include <stdio.h>
#include <math.h>

int main ()
{
    /* Escreva um algoritmo que leia um número real e realize o arredondamento deste número usando 1, 2
e 3 casas decimais. A apresentação do número deve conter, obrigatoriamente 6 casas decimais. As casas
decimais posteriores ao dígito arredondado devem conter o valor 0.
Considerações
O arredondamento de um número é uma operação que elimina algarismos de menor significância. A
regra de arredondamento aplica-se nos algarismos situados após a posição da quantidade de casas decimais
desejada. Ou seja, o processo de arredondamento do número 12.318215 considerando 1 casa decimal deve
avaliar os números 18215. Para 2 casas decimais deve-se avaliar os números 8215, e assim por diante.
• Se o algarismo seguinte for menor que 5, então o anterior não se modifica
• Se os algarismo seguinte fore maior ou igual a 5, então o anterior é incrementado
Entrada
O programa deve ler 1 valor real.
Saída
O programa deve imprimir a primeira linha contendo o número arredondado com 1 casa decimal, a
segunda com 2 casas decimais e a terceica com 3 casas decimais.*/

double numero;

printf ("Informe o número real:");
scanf ("%lf" , &numero);

double arred_1 = round (numero*10)/10;
double arred_2 = round (numero*100)/100;
double arred_3 = round (numero*1000)/1000;

printf ("Valor arredondado (1 casa decimal): %.1lf \n" , arred_1);
printf ("Valor arredondado (1 casa decimal): %.2lf \n" , arred_2);
printf ("Valor arredondado (1 casa decimal): %.3lf \n" , arred_3);

    return 0;
}
