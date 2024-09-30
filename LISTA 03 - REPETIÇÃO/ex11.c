#include <stdio.h>

int main (){
    
/*Dados n e uma seqüência de n números inteiros, determinar o comprimento
de um segmento crescente de comprimento máximo.
Entrada
O programa deve ler um número inteiro maior que zero n e uma sequência de n números inteiros em
qualquer ordem.
Saída
O programa deve apresentar a mensagem "O comprimento do segmento crescente maximo e: k
n", onde k é o tamanho do maior segmento crescente encontrado.*/    

    int num, contador;
    int seguimentoMax =1;
    int seguimentoCorrente =1;

    scanf("%d", &num);
    
    int sequencia[num];

    for (contador = 0;contador < num; contador++) {
        scanf("%d", &sequencia[contador]);
    }

    for (contador = 1; contador < num; contador++) {
        if (sequencia[contador] > sequencia[contador - 1]) {
            seguimentoCorrente++;
        } else {
            if (seguimentoCorrente > seguimentoMax) {
                seguimentoMax = seguimentoCorrente; 
            }
            seguimentoCorrente = 1;
        }
    }

    if (seguimentoCorrente > seguimentoMax) {
        seguimentoMax = seguimentoCorrente;
    }

    printf("O comprimento do segmento crescente maximo e: %d\n" , seguimentoMax);
    
    return 0;
}