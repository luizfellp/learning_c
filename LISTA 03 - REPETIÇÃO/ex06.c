#include <stdio.h>

int main()
{
/*
Faça um programa que leia um valor n, inteiro e positivo, calcule e mostre a seguinte soma:
S =
n 
∑
k=1
= 1
k = 1 + 1/2 + 1/3 + 1/4 + . . . + 1/n (1)
Entrada
O programa deve ler um número inteiro positivo e maior que 1.
Saída
O programa deve apresentar uma linha contendo o valor final do somatório com 6 casas decimais. Caso
o número lido não atenda as especificações da entrada, o programa deve apresentar a mensagem: "Numero
invalido!".
Observações
Use precisão dupla para o cálculo de S.*/

int n, contador;
double somaFinal;

scanf("%i" , &n);

if (n <= 1){
    printf("Numero invalido!");
}else{
    for (contador= 1 ; contador<= n ;contador++){
        somaFinal = somaFinal + 1.0 / contador;
    }
}

   printf ("%.6lf" , somaFinal);

 return 0;
}