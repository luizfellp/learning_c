
#include <stdio.h>

int main ()
{
/*Sabendo-se que 100 kW de energia custam 70% do salário mínimo, escreva um algoritmo em Linguagem C que leia o valor do salário mínimo e a quantidade de kW gasta por uma residência. Calcule e
imprima:
• o valor em reais de cada kW;
• o valor em reais a ser pago pelo consumo da residência;
• o novo valor a ser pago pela residência com um desconto de 10%*/

int salário;
float pcsalário;

int kw;
float kwcusto;

float Valoraserpago;
float Valordesconto;

printf ("Informe o salário mínimo vigente:");
scanf ("%i" , &salário);

printf ("Informe a quantidade de kw gastos na sua residência dentro do último mês:");
scanf ("%i" , &kw);

pcsalário = salário * 0.007;
kwcusto = kw * pcsalário;

printf ("O valor de cada kw é: R$ %.1f" , kwcusto);

Valoraserpago = kwcusto * kw;
printf ("\nO valor a ser pago no mês: %.1f" , Valoraserpago);

Valordesconto = Valoraserpago * 0.9;
printf ("\nO valor a ser pago no mês (com desconto): %.1f" , Valordesconto);

    return 0;
}
