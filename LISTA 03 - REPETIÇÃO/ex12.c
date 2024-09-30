#include <stdio.h>

int main () {

    /*Dados n e uma sequência de n números inteiros, determinar quantos segmen-
tos de números iguais consecutivos compõem essa seqüência.
Entrada
O programa deve ler um número inteiro maior que zero n e uma sequência de n números inteiros em
qualquer ordem.
Saída
O programa deve apresentar a mensagem "O comprimento do segmento de numeros iguais e: k
n", onde k é o tamanho do maior segmento crescente encontrado.*/

    int num, contador, segmentos = 1, comprimentoAtual = 1, maiorComprimento = 1;

    scanf("%d", &num);
    
    int sequencia[num];

    for(contador = 0; contador < num; contador++) {
        scanf("%d", &sequencia[contador]);    
    }

    for (contador = 1; contador < num; contador++) {
        if (sequencia[contador] == sequencia[contador - 1]) {
            comprimentoAtual++;
        } else {
            segmentos++;
            if (comprimentoAtual > maiorComprimento) {
                maiorComprimento = comprimentoAtual;
            }
            comprimentoAtual = 1;
        }
    }

    if (comprimentoAtual>maiorComprimento) {
        maiorComprimento =comprimentoAtual;
    }

    printf("O comprimento do segmento de numeros iguais e: %d \n", maiorComprimento);
    
    return 0;
}
