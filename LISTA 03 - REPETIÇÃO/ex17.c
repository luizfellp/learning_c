#include <stdio.h>
#include <math.h>

int main(){
/*Os Babilônios utilizavam um algoritmo para aproximar uma raiz quadrada de um número qualquer, da
seguinte maneira:
Dado um número n, para calcular r = √n assume-se uma aproximação inicial r0 = 1 e calcula-se rk
para k = 1, . . . , ∞ até que r2
k ≈ n. O algoritmo deve realizar a aproximação enquanto |n − r2
k | > e. O método
babilônico é dado pela seguinte equação:
rk = rk−1 + n
rk−1
2 (3)
Entrada
O programa deve ler um número double n, cuja raiz quadrada deseja-se obter, e o erro e que deverá ser
considerado pelo algoritmo.
Saída
A saída deve apresentar cada iteração do algoritmo, sendo cada linha composta pelo valor aproximado
da raiz quadrada de n com 9 casas decimais, seguido do erro, também com 9 casas decimais*/

double n, e, raiz, raiz_prev;
    

    scanf("%lf %lf", &n, &e);

    raiz = 1.0;

    do {
        raiz_prev = raiz;

        raiz = (raiz_prev + n / raiz_prev) / 2;

        printf("r: %.9lf err: %.9lf\n", raiz, fabs(n - raiz * raiz));
        
    } while (fabs(n - raiz * raiz) > e); // Condição de erro: diferença entre n e r² maior que e

    return 0;
}


