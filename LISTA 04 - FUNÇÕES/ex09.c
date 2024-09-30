#include <stdio.h>

/*ado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores
positivos diferentes de n. Construa um programa que leia um número inteiro n, apresenta a soma dos
divisores de n e verifica se o número informado é perfeito ou não.
Escreva uma função somaDivisores que receba como parâmetro um número inteiro e retorne a soma
dos divisores desse número excluindo o próprio número como divisor de si mesmo. Seu programa deve
chamar a função somaDivisores para resolver o problema.
Entrada
O programa deve ler um número inteiro n.
Saída
O programa deve apresentar uma linha contendo o texto: "n = d1 + d2 + d3 + ... + dk = x (MENSA-
GEM)", onde n é o número lido, di são os divisores de n em ordem crescente, x é a soma dos divisores e
MENSAGEM é a mensagem "NUMERO PERFEITO"ou "NUMERO NAO E PERFEITO".
Observações
Suponha que o usuário sempre fornecerá um número maior que 1.*/


int somaDivisores(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int n, soma;


    scanf("%d", &n);

    soma = somaDivisores(n);

    printf("%d =", n);


    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            if (i == 1) {
                printf(" %d", i);
            } else {
                printf(" + %d", i);
            }
        }
    }

    printf(" = %d ", soma);
    if (soma == n) {
        printf("(NUMERO PERFEITO)\n");
    } else {
        printf("(NUMERO NAO E PERFEITO)\n");
    }

    return 0;
}
