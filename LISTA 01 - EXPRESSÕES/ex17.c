#include <stdio.h>

int main ()
{
    /* Escreva um algoritmo par ler um valor em reais e calcular qual o menor número possível de notas de $R
100, $R 50, $R 10 e moedas de $R 1 em que o valor lido pode ser decomposto. O programa deve escrever
a quantidade de cada nota e moeda a ser utilizada.
Entrada
O programa deve ler uma única linha na entrada, contendo um valor em Reais. Considere que somente
um número inteiro seja fornecido como entrada.
Saída
O programa deve imprimir quatro frases, uma em cada linha: NOTAS DE 100 = X, NOTAS DE 50 =
Y , NOTAS DE 10 = Z, MOEDAS DE 1 = W , onde X, Y , Z e W correspondem às quantidades de cada nota
ou moeda necessárias para corresponder ao valor em Reais dado como entrada. Após cada quantidade, o
programa deve imprimir um caractere de quebra de linha: ‘\n’.*/

int valorBase, nota100, nota50, nota10, moeda1;

printf("Informe o valor que possui:");
scanf("%i" , &valorBase);

nota100 = valorBase/100;
valorBase = valorBase % 100;

nota50 = valorBase /50;
valorBase = valorBase %50;

nota10 = valorBase / 10;
valorBase = valorBase % 10;

moeda1 = valorBase;

    printf("NOTAS DE 100 = %i\n", nota100);
    printf("NOTAS DE 50 = %i\n", nota50);
    printf("NOTAS DE 10 = %i\n", nota10);
    printf("MOEDAS DE 1 = %i\n", moeda1);
    
    

 return 0;

}