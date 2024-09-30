#include <stdio.h>

int main()
{
/*
Dado um número inteiro n, calcule seu fatorial n!. O fatorial de um número é dado pela equação:
n! = n(n − 1)(n − 2) . . . 1. Por definição, 0! = 1.
Entrada
O programa deve ler um número inteiro n.
Saída
O programa deve apresentar uma linha com a mensagem: "n! = f", onde n é o número lido e f o seu
fatorial.
Observações
O fatorial de um número é resultado de uma operação de produtório que pode levar a valores incrivel-
mente grandes. Lembre-se de usar tipos de dados apropriados ao problema proposto*/

int numero, resultado=1,i;

    scanf("%i" , &numero);
    
    for (i=1;i<=numero;i++){
        resultado = resultado*i;
    }
    
    printf ("%d! = %d", numero, resultado);

return 0;
}