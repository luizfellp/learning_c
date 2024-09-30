#include <stdio.h>
#include <math.h>

int main ()
{
    /* Fazer um programa que leia um valor de tempo expresso em horas, minutos e segundos e que converta
esse tempo para um valor em segundos.
Entrada
O programa deve ler três linhas na entrada. A primeira contém um valor em horas, a segunda, contém
um valor em minutos e a terceira, contém um valor em segundos. Os valores são todos números inteiros.
Saída
O programa deve imprimir uma linha contendo a frase: O TEMPO EM SEGUNDOS E = X, onde X é
o valor do tempo convertido em segundos. Após o valor do tempo em segundos, o programa deve imprimir
um caractere de quebra de linha: ‘\n’.*/

int horas,minutos,segundos,minutos2,horas2,valorfinal;

printf ("Informe o valor das horas:");
scanf ("%i" , &horas);

printf ("Informe o valor dos minutos:");
scanf ("%i" , &minutos);

printf ("Informe o valor dos segundos:");
scanf ("%i" , &segundos);

minutos2=minutos*60;
horas2=horas*60*60;
valorfinal=horas2+minutos2+segundos;

printf ("O TEMPO EM SEGUNDOS É = %i \n" , valorfinal);


    
    return 0;
}