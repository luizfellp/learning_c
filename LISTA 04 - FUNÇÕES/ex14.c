#include <stdio.h>
#include <math.h>

/*João tem um irmão mais novo, José, que começou a ir à escola e já está tendo problemas com números.
Para ajudá-lo a pegar o jeito com a escala numérica, sua professora escreve dois números de três dígitos
e pede a José para comparar esses números. Mas em vez de interpretá-los com o dígito mais significativo
à esquerda, ele deve interpretá-lo com o dígito mais significativo à direita. Ele tem que dizer à professora
qual o maior dos dois números. Escreva um programa que irá verificar as respostas de José.
Escreva uma função inverte que receba como parâmetro um número inteiro (de três dígitos) e retorne
o número invertido. Sugestão: aprenda a aproveitar código! Copie a função SeparaDigitos que você
escreveu para o problema “Número Invertido” e cole no seu programa. Faça a função inverte chamar a
função SeparaDigitos para te auxiliar a computar o número invertido. O seu programa deve chamar a
função inverte quantas vezes for necessário para resolver o problema.
Entrada
A entrada conterá um inteiro T , o número de casos de testes, e, para cada caso de teste, uma única linha
com dois números de três dígitos, A e B, os quais não serão iguais e não conterão zeros.
Saída
A saída deve conter, numa linha para cada caso de teste, com o maior dos números na entrada, compa-
rados como descrito no enunciado da tarefa. O número deve ser escrito invertido, para mostrar a José como
ele deve lê-lo.*/


void separaDigitos(int numero, int *d1, int *d2, int *d3) {
    *d1 = numero / 100;
    *d2 = (numero / 10) % 10;
    *d3 = numero % 10;
}

int inverte(int numero) {
    int d1, d2, d3; 
    separaDigitos(numero, &d1, &d2, &d3);
    return d3 * 100 + d2 * 10 + d1;
}

int main() {
    int T; 
    scanf("%d", &T); 
    for (int i = 0; i < T; i++) {
        int A, B; 
        scanf("%d %d", &A, &B);
        
        int A_invertido = inverte(A);
        int B_invertido = inverte(B); 
        
        if (A_invertido > B_invertido) {
            printf("%d\n", A_invertido);
        } else { 
            printf("%d\n", B_invertido);
        } 
    } 
    
    return 0;
}