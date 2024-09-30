#include <stdio.h>

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

void separaDigitos(int numero, int *primeiro, int *segundo, int *terceiro) {
    *terceiro = numero % 10;
    numero /= 10;
    *segundo = numero % 10;
    numero /= 10;
    *primeiro = numero;
}

int main() {
    int numero, primeiro, segundo, terceiro;

    scanf("%d", &numero);

    separaDigitos(numero, &primeiro, &segundo, &terceiro);

    printf("%d%d%d\n", terceiro, segundo, primeiro);

    return 0;
}