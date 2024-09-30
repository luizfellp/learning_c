#include <stdio.h>
#include <math.h>

/*Desenvolver um programa que leia os coeficientes (a, b e c) de uma equação de segundo grau e calcule
as raízes da equação. O programa deve mostrar a classificação das raízes, e, quando possível, o valor das
raízes calculadas.
Seu programa deve criar uma função raizesEq2Grau que tenta computar as raízes de uma equação do
segundo grau. A função deve retornar 2 se existir duas raízes reais distintas entre si, ou 1 se existir uma
única raiz real, ou ainda, zero se as raízes são imaginárias. A função deve ter como parâmetros de entrada
os coeficientes a, b, c de uma equação de segundo grau e deve ter dois parâmetros de saída, correspondendo
às raízes da equação. No caso em que a função retorna 0 (raízes imaginarias) os parâmetros de saída não
são utilizados pelo seu programa.
Entrada
O programa deve ler três valores reais na entrada. O primeiro valor corresponde ao valor do coeficiente
a, o segundo, do coeficiente b e o terceiro, do coeficiente c, de uma equação de segundo grau. Os três
valores ocorrem em uma única linha na entrada, separados entre si por um espaço.
Saída
O programa deve imprimir uma linha contendo uma das seguintes frases, conforme for o resultado do
cálculo das raízes da equação: RAIZES DISTINTAS, ou RAIZ UNICA, ou RAIZES IMAGINARIAS. No
primeiro caso o programa deve imprimir uma outra linha contendo a frase X1 = x1, onde x1 é o valor da
menor raiz encontrada para a equação. Ainda no primeiro caso, o programa deve imprimir uma terceira
linha com a frase X2 = x2, onde x2 corresponde ao valor da segunda raiz. No segundo caso, o programa
deve imprimir uma frase X1 = x1, onde x1 é o valor da única raiz da equação. O terceiro caso não há o que
imprimir pois as raízes são imaginárias.
Observações
Dada uma equação do segundo grau do tipo ax2 + bx + c, ∆ (delta) = b2 − 4ac. Se ∆ = 0, a raiz da
equação é ÚNICA. Se ∆ < 0. As raízes da equação são IMAGINÁRIAS. Se ∆ > 0, então há duas RAÍZES
DISTINTAS para a equação. A fórmula geral para computar as raízes de uma equação do segundo grau é a
fórmula de Báskara, dada por:
x = −b ± √∆
2a
Exemplo
A seguir são mostrados três exemplos distintos de entrada, e suas correspondentes saídas, entretanto,
existe apenas uma linha de entrada para esse problema.*/


int raizesEq2Grau(double a, double b, double c, double *x1, double *x2) {
    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        *x1 = (-b - sqrt(delta)) / (2 * a);
        *x2 = (-b + sqrt(delta)) / (2 * a);
        return 2;
    } else if (delta == 0) {
        *x1 = -b / (2 * a);
        return 1;
    } else {
        return 0;
    }
}

int main() {
    double a, b, c, x1, x2;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    int resultado = raizesEq2Grau(a, b, c, &x1, &x2);
    
    if (resultado == 2) {
        printf("RAIZES DISTINTAS\n");
        if (x1 < x2) {
            printf("X1 = %.5lf\n", x1);
            printf("X2 = %.5lf\n", x2);
        } else {
            printf("X1 = %.5lf\n", x2);
            printf("X2 = %.5lf\n", x1);
        }
    } else if (resultado == 1) {
        printf("RAIZ UNICA\n");
        printf("X1 = %.5lf\n", x1);
    } else {
        printf("RAIZES IMAGINARIAS\n");
    }

    return 0;
}