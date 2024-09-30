#include <stdio.h>
#include <math.h>

int main ()
{
    /* O volume (V ) de uma pirâmide cuja base é um hexágono regular é computado pela Equação 1:
v = 1
3 · Ab · h, (1)
onde h é a altura da pirâmide e Ab é a área do hexágono que forma a base da pirâmide. A área do
hexágono é computada pela Equação 2:
Ab = 3 · a2 · √3
2 , (2)
onde a é o comprimento de uma aresta do hexágono regular.
Entrada
O programa deve ler uma linha com dois números float, separados entre si por um espaço. O primeiro
número corresponde à altura da pirâmide e o segundo número corresponde a uma aresta do hexágono que
forma a abase da pirâmide. Ambos são valores em metros.
Saída
O programa deve emitir a frase: O VOLUME DA PIRAMIDE E = x METROS CUBICOS, onde x é o
valor do volume da pirâmide em metros cúbicos e com duas casas decimais. Ao final da frase o programa
deve imprimir o caractere de quebra de linha (\n). */

float alturapiramide , aresta , aresta2 , volumetotal;

printf ("Informe respectivamente a altura e a aresta do hexágono (em metros) separados por um espaço:");
scanf ("%f %f" , &alturapiramide , &aresta);

aresta2= (3*aresta*aresta*sqrt(3))/2;

volumetotal= (1.0/3.0)*aresta2*alturapiramide;

printf ("O VOLUME DA PIRAMIDE É = %.2f \n" , volumetotal );

    
    
    return 0;
}