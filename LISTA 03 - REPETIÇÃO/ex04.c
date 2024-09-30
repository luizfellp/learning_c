#include <stdio.h>

int main()
{
/*
Escreva um programa para ler uma linha com dois números inteiros x e y. O programa deve verificar se
x é um número par. Se for, o programa deve imprimir uma sequência de y números pares, iniciando com x.
Se x não for par, o programa deve imprimir uma linha com a mensagem: O PRIMEIRO NUMERO NAO E
PAR.
Entrada
A entrada conterá uma linha com dois números inteiros separados entre si por um caractere de espaço.
Após o segundo número na entrada há um caractere de quebra de linha (\n).
Saída
Se o primeiro número for par, o programa deve imprimir uma linha contendo a sequência de números
pares, com um espaço entre cada número par. Após o último número da serie, o programa deve imprimir
um espaço seguido de um caractere de quebra de linha (‘\n’). Se o primeiro número não for par, o programa
deve imprimir a mensagem O PRIMEIRO NUMERO NAO E PAR e logo em seguida, o caractere de quebra
de linha*/

int contador, X, Y;

scanf("%i %i" , &X, &Y);

    if (X%2==0){
        
        for (contador=1; contador < Y; contador++){
            
            printf("%d " , X+ (2*contador));
            
        }
        
        printf ("\n");
        
    }
    
    if (X%2!=0){
        
        printf("O PRIMEIRO NUMERO NAO E PAR \n");
        
    }
    



 return 0;
}