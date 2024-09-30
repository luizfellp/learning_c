#include <stdio.h>

int main(){
/*Escreva um algoritmo que leia 4 números reais em qualquer ordem e os apresente de forma ordenada
na tela.
Entrada
O programa deve ler 4 valores reais.
Saída
O programa deve imprimir uma linha contento a lista ordenada de números separados por vírgula e
espaço, cada número com 2 casas decimais.*/

float a,b,c,d,temp;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    if (a > b) { temp = a; a = b; b = temp;}
    if (a > c) { temp = a; a = c; c = temp;}
    if (b > c) { temp = b; b = c; c = temp;}
    if (a > d) { temp = a; a = d; c = d; b = c; b = temp;}
    
    printf("%.2f, %.2f, %.2f, %.2f", a,b,c,d);
    
    return 0;
}