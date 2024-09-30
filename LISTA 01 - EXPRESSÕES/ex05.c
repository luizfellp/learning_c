#include <stdio.h>

int main ()
{
    /* Fazer um programa tal que dados os quatro elementos de uma matriz 2 × 2, calcule e escreva o valor do
determinante desta matriz.
Entrada
O programa deve ler os quatro elementos a, b, c e d que formam uma matriz quadrada bidimensional.
Há um valor por linha de entrada. Cada valor corresponde a um número real (float).
Saída
O programa deve imprimir uma linha contendo a frase: O VALOR DO DETERMINANTE E = X, onde
X é o valor do determinante computado pelo seu programa e deve conter no máximo 2 casas decimais.
Após o valor do determinante, o programa deve imprimir um caractere de quebra de linha: "\n"*/

float A;
float B;
float C;
float D;
float determinante;

printf ("Informe o valor de A:");
scanf ("%f" , &A);

printf ("Informe o valor de B:");
scanf ("%f" , &B);

printf ("Informe o valor de C:");
scanf ("%f" , &C);

printf ("Informe o valor de D:");
scanf ("%f" , &D);

determinante = A*D - B*C;

printf ("O VALOR DO DETERMINANTE E = %.2f \n" , determinante);
    
    return 0;
}