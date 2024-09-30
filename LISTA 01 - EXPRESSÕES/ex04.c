#include <stdio.h>

int main ()
{
	/*Fazer um programa para ler os valores dos coeficientes A, B e C de uma equação quadrática e calcular e
imprimir o valor do discriminante (∆). O valor de ∆ é dado pela fórmula: ∆ = B2 − 4AC.
Entrada
O programa deve ler três valores reais na entrada. O primeiro valor corresponde ao valor do coeficiente
A, o segundo, do coeficiente B e o terceiro, do coeficiente C, de uma equação do seguro grau. Cada valor
ocorre em uma linha diferente na entrada.
Saída
O programa deve imprimir uma linha contendo a frase: O VALOR DE DELTA E = X, onde X é o valor
de delta computado pelo seu programa e deve conter no máximo 2 casas decimais. Após o valor de delta, o
programa deve imprimir um caractere de quebra de linha: "\n". */

float A;
float B;
float C;
float AC;
float discriminante;

printf ("Informe o valor de A:");
scanf ("%f" , &A);

printf ("Informe o valor de B:");
scanf ("%f" , &B);

printf ("Informe o valor de C:");
scanf ("%f" , &C);  

discriminante = B*B - 4*A*C;

printf ("O VALOR DE DELTA E = %2.f" , discriminante);
    
    
	return 0;
}
