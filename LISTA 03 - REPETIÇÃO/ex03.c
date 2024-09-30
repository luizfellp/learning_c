#include <stdio.h>

int main()
{
/*
Escreva um programa para ler um valor inteiro N e que gere o quadrado de cada um dos valores pares,
de 1 até N, inclusive N, se for o caso.
Entrada
A entrada conterá uma linha com um valor inteiro N, 5 < N < 2000.
Saída
A saída deve conter, uma linha para cada quadrado computado. Em cada linha deve constar uma ex-
pressão do tipo xˆ2 = y, onde x é um número par e y é o seu valor elevado ao quadrado. Imediatamente
após o valor de y deve aparecer o caractere de quebra de linha: ‘\n’.*/

int contador,N;

scanf ("%i" ,&N);

if (N > 5 && N <2000){
        
        for (contador = 2; contador <= N; contador += 2){
        printf("%dˆ2 = %d\n" , contador, contador*contador);
        }
    }


 return 0;
}