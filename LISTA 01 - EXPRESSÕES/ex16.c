#include <stdio.h>

int main ()
{
    /* Escreva um programa para ler um número de três dígitos e imprimir o número invertido.
Entrada
A entrada contém apenas um número com três dígitos. Esse número é diferente de zero e não é múltiplo
de 10 ou 100.
Saída
A saída deve conter apenas uma linha com o número correspondente ao valor da entrada, com seus
dígitos invertidos. Logo após o número, deve ser impresso o caractere de quebra de linha: ’\n’*/

int numero, cifra;

printf("informe um número inteiro positivo:\n");
scanf("%d" , &numero);

if (numero >=0);{
    do {cifra = numero % 10;
       printf ("%d",cifra);
       numero /=10;
    }
    while (numero !=0);}
    
    

 return 0;

}