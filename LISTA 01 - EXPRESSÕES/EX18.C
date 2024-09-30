#include <stdio.h>

int main()
{
/* Dado um sistema de equações lineares do tipo:
ax + by = c
dx + ey = f
Escreva um programa para ler os valores dos coeficientes: a, b, c, d, e e f e calcular os valores de x e y.
Entrada
O programa deve ler os valores de a, b, c, d, e, f nesta ordem, um valor por linha. Os valores são
números reais (float).
Saída
O programa deve imprimir uma linha contendo a frase: O VALOR DE X E = z, onde z é o valor da
variável x, escrito com duas casas decimais. O programa deve imprimir uma segunda linha contendo a
frase: O VALOR DE Y E = w, onde w corresponde ao valor da variável y escrito com duas casas decimais.
Ao final da segunda linha o programa deve imprimir um caractere de quebra de linha: ‘\n */

float a,b,c,d,e,f,x,y,determinante;

scanf("%f" , &a);
scanf("%f" , &b);
scanf("%f" , &c);
scanf("%f" , &d);
scanf("%f" , &e);
scanf("%f" , &f);

determinante = a * e - b * d;

x = (c * e - b * f) / determinante;
y = (a * f - c * d) / determinante;

printf("O VALOR DE X E = %.2f\n", x);
printf("O VALOR DE Y E = %.2f\n", y);

 return 0;
 
 }