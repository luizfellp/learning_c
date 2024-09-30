#include <stdio.h>

int main() {
    
    /*24 Mínimo múltiplo comum (+++)
(+++)
Faça um programa que calcule o Mínimo Múltiplo Comum (MMC) de 3 números inteiros. A Figura 24
apresenta um exemplo de cálculo de MMC.
Figura 2: Exemplo de cálculo do MMC para os números 4, 6 e 8
Entrada
O programa deve ler 3 números inteirios diferentes de zero.
Saída
A saída é composta por várias linhas. O programa deve replicar a saída do procedimento da Figura
24 com expresso nos exemplos de entrada e saída. Cada linha deve ser impressa com o seguinte código:
"%d %d %d :%d", onde o número 5 indica a quantidade mínima de espaços ou dígitos do número a ser
apresentado.*/

int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

int mmc_ab = mmc(a, b);
int mmc_abc = mmc(mmc_ab, c);

    printf("%5d %5d %5d :%d\n", a,b, c,mmc_abc);

    return 0;
}

int mdc(int a, int b) {
    return b == 0 ? a : mdc(b, a % b);
}

int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}
