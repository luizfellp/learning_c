#include <stdio.h>
#include <math.h>

int main ()
{
    /* Desenvolver um algoritmo para ler os comprimentos dos três lados de um triângulo (L1, L2 e L3) e
calcular a área do triângulo.
Considerações
A área de um triângulo pode ser computada pela fórmula:
A = √T (T − L1)(T − L2)(T − L3)
onde
T = L1 + L2 + L3
2
A função s q r t ( ) computa a raiz quadrada de uma expressão. Para usar essa função você deve incluir o
arquivo de cabeçalho math . h, inserindo a seguinte diretiva de pré-processamento logo no início do seu
arquivo com o programa em C: # i n c l u d e <math . h>
Entrada
O programa deve ler três valores reais na entrada, cada um correspondendo ao comprimento de um lado
do triângulo. Cada valor ocorre em uma linha diferente na entrada.
Saída
O programa deve imprimir uma linha contendo a frase: A AREA DO TRIANGULO E = X, onde X é o
valor da área do triângulo e deve conter no máximo 2 casas decimais. Após o valor da área do triângulo, o
programa deve imprimir um caractere de quebra de linha: "\n".*/

float A,T,L1,L2,L3;

printf ("Informe o lado A:");
scanf ("%f" , &L1);

printf ("Informe o lado B:");
scanf ("%f" , &L2);

printf ("Informe o lado C:");
scanf ("%f" , &L3);

T= (L1+L2+L3)/2;
A= sqrt(T*(T-L1)*(T-L2)*(T-L3));

printf ("A AREA DO TRIANGULO E = %.2f\n" , A);

    return 0;
}