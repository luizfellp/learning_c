#include <stdio.h>

int main() {
    
    /*(IME-USP) Sabe-se que um número da forma n3 é igual a soma de n ímpares consecutivos.
Exemplo: 13 = 1, 23 = 3 + 5, 33 = 7 + 9 + 11 e 43 = 13 + 15 + 17 + 19. Dado m, determine os ímpares
consecutivos cuja soma é igual a n3 para n assumindo valores de 1 a m.
Entrada
O programa deve ler um número inteiro maior que zero.
Saída
O programa deve apresentar m linhas com a seguinte mensagem: "k ∗ k ∗ k = x1 + x2 + . . . + xk", onde
k = 1, 2, . . . , m e xi é a sequência de números ímpares consecutos.*/

int m, n, i, j, start;

    scanf("%d", &m);

    for (n = 1; n<= m; n++) {
        int cubo = n * n * n;
        start = n *(n - 1) + 1;
        printf("%d * %d * %d = ", n,n,n);

        for (i = 0, j = start; i <n; i++, j += 2) {
            if (i == n - 1)
                printf("%d\n", j);
            else
                printf("%d + ", j);
        }
    }

    return 0;
}
