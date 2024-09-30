#include <stdio.h>

int main(){
/*(Adaptado de FARRER, 1999) Faça um algoritmo em linguagem C que calcule e escreva o número
de grãos de milho que se pode colocar em um tabuleiro de xadrez, colocando n no primeiro quadro e nos
quadros seguintes o dobro de n, caso o quadro seja escuro, e a mesma quantidade de n, caso o quadro seja
branco. Percorra o tabuleiro sempre da esquerda para a direita e de baixo para cima. A Figura 1 apresenta
um tabuleiro de xadrez típico.
Figura 1: Tabuleiro de xadrez.
Entrada
O programa deve ler uma linha contendo um número inteiro n.
Saída
O programa deve apresentar uma linha contendo a quantidade de grãos que podem ser colocados no
tabuleiro.*/

    int n, i,totalGraos=0;
    int qEscuro;

    scanf("%i", &n);

    for (i = 1; i <= 64; i++) {
        qEscuro = (i / 8 %2 == 0 &&i % 2 != 0) || (i / 8 % 2 != 0 &&i %2 == 0);

        if (qEscuro) {
            totalGraos += n*2;
        } else {
            totalGraos +=n;
        }
    }

totalGraos-=n;

    printf("%i \n", totalGraos);

    return 0;
}

