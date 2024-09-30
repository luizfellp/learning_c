#include <stdio.h>

int main ()
{
/* Muitos países estão passando a utilizar o sistema métrico. Faça um programa para executar as seguintes
conversões:
• Ler uma temperatura em Fahrenheit e imprimir o equivalente em Celsius (C =
5(F−32)
9
).
• Ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros (1 polegada
= 25.4 mm).
Entrada
O programa deve ler dois valores na entrada: um valor em Fahrenheit e outro valor em polegadas.
Ambos os valores são do tipo float. Cada valor ocorre em uma linha diferente na entrada.
Saída
O programa deve imprimir duas linhas. Aa primeira contém a frase: O VALOR EM CELSIUS = X,
onde X é o valor de temperatura convertido de Fahrenheit para Celsius e deve ter duas casas decimais. A
segunda linha deve conter a frase: A QUANTIDADE DE CHUVA E = Y, onde Y é o valor em milímetros
correspondente ao valor em polegadas dado como entrada. Y é um valor real (float) e deve ter duas*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// f to c
float Fahrenheit;
float Celsiusant;
float Calculocelsius;
float Celsiusfin;

printf ("Informe a temperatura em °F:");
scanf ("%f" , &Fahrenheit);

Calculocelsius = 5.00 / 9.00;
Celsiusant = Fahrenheit - 32.00;
Celsiusfin = Celsiusant * Calculocelsius;

printf ("O VALOR EM CELSIUS = %.2f" , Celsiusfin);

// p to mm
float Polegadas;
float Milímetros;

printf ("\nInforme a quantidade de chuva em Pol:");
scanf ("%f" , &Polegadas);

Milímetros = Polegadas * 25.4;

printf ("A QUANTIDADE DE CHUVA É = %.2f" , Milímetros);

    return 0;
}

