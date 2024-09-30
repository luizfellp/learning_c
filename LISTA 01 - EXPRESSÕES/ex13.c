#include <stdio.h>
#include <math.h>

int main ()
{
    /* Dados dois pontos A e B, cujas coordenadas A(x1, y1) e B(x2, y2) serão informadas via teclado, desen-
volver um programa que calcule a distância entre A e B.
Entrada
O programa deve ler os quatro valores reais correspondendo às coordenadas dos dois pontos : x1, y1, x2, y2,
nessa ordem, e um valor por linha.
Saída
O programa deve imprimir uma linha contendo a frase: A DISTANCIA ENTRE A e B = X, onde X
é o valor da distância entre os dois pontos e deve conter no máximo 2 casas decimais. Após o valor da
distância, o programa deve imprimir um caractere de quebra de linha: ‘\n’.
Observações
A distância entre dois pontos é computada pela fórmula:
d =
√
(x2 − x1)2 + (y2 − y1)2
Você pode usar a função sqrt() para calcular a raiz quadrada na fórmula da distância. Para computar o
quadrado de um valor x você pode usar a função pow(x,2). Para usar essas funções, você precisa colocar
#include <math.h> no início do texto do programa.*/

float x1,y1,x2,y2,distancia;

printf ("Informe o x1:");
scanf("%f" , &x1);
printf ("Informe o y1:");
scanf("%f" , &y1);
printf ("Informe o x2:");
scanf("%f" , &x2);
printf ("Informe o y2:");
scanf("%f" , &y2);

distancia= (sqrt(pow((x1-x2),2)+pow((y1-y2),2)));

printf("A DISTANCIA ENTRE A e B = %.2f \n" , distancia);

    return 0;
}