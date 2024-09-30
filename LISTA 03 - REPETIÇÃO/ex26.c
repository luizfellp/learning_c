#include <stdio.h>

int main() {
    
    /*Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores
positivos diferentes de n. Construa um programa que leia um número inteiro n, apresenta a soma dos
divisores de n e verifica se o número informado é perfeito ou não.
Entrada
O programa deve ler um número inteiro n.
Saída
O programa deve apresentar uma linha contendo o texto: "n = d1 + d2 + d3 + ... + dk = x (MENSA-
GEM)", onde n é o número lido, di são os divisores de n em ordem crescente, x é a soma dos divisores e
MENSAGEM é a mensagem "NUMERO PERFEITO"ou "NUMERO NAO E PERFEITO".
Observações
Suponha que o usuário sempre fornecerá um número maior que 1*/

int n, i , soma_divisores = 0 ;

scanf("%d",  &n);

    printf(   "%d =", n );

    for (  i = 1 ; i   < n ; i++ ) {
        if ( n % i == 0) {
            soma_divisores  += i ;
            if ( soma_divisores == i )
                  printf(  " %d"  , i  );
            else
                printf( " + %d" , i );
        }
    }

    printf(   " = %d " ,  soma_divisores);

    if  ( soma_divisores ==  n ) 
        printf(" (NUMERO  PERFEITO)\n" );
    else 
         printf("(NUMERO NAO E  PERFEITO)\n" );

    return   0;
}