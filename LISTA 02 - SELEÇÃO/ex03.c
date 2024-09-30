#include <stdio.h>

int main()
{
/* Desenvolver um programa para calcular a conta de água para uma empresa de saneamento. O custo da
água varia dependendo se o consumidor é residencial, comercial ou industrial. A regra para calcular a conta
é:
• Residencial: R$ 5, 00 de taxa mais R$ 0, 05 por metros cúbicos gastos;
• Comercial: R$ 500, 00 para os primeiros 80 metros cúbicos gastos mais R$ 0, 25 por metros cúbicos
excedentes;
• Industrial: R$ 800, 00 para os primeiros 100 metros cúbicos gastos mais R$ 0, 04 por metros cúbicos
excedentes;
O programa deverá ler a conta do cliente, o consumo de água por metros cúbicos e o tipo de consumidor (
residencial, comercial e industrial ). Como resultado, o programa deve imprimir a conta do cliente e o valor
em Reais a ser pago pelo mesmo.
Entrada
O programa deverá ler uma linha na entrada contendo: a conta do cliente (um número inteiro), o con-
sumo de água por metros cúbicos (float) e o tipo do consumidor (um caractere: ‘C’ - COMERCIAL, ‘I’ -
INDUSTRIAL ou ‘R’ - RESIDENCIAL). Há um espaço entre os valores na linha de entrada
Saída
O programa deve imprimir duas linhas, contendo o seguinte:
• CONTA = u, onde u é o código inteiro identificador da conta;
• VALOR DA CONTA = v, onde v é o valor da conta com duas casas decimais, a ser pago pelo consu-
midor;
Após o valor impresso em cada linha, o programa dev imprimir o caractere de quebra de linha; ‘\n’. Os
valores de v,x e w devem conter duas casas decimais. */

int valorConta;
float consumo,valorPagamento;
char tipo;

scanf("%i %f %c" , &valorConta, &consumo, &tipo);

switch (tipo) {
    case 'R':
    case 'r':
    valorPagamento= 5.00 + (0.05*consumo);
    break;
    
    case 'C':
    case 'c':
    if (consumo <=80){
        valorPagamento=500.00;
    } else {valorPagamento = 500.00 + (0.25*(consumo - 80));}
    break;
    
    case 'I':
    case 'i':
    if (consumo <=100){
        valorPagamento=800.00;
    } else {valorPagamento = 800.00 + (0.04*(consumo - 100));}
    break;
    
    default: printf("Inválido.");
    return 1;}
    
    printf("Conta do cliente: %d\n", valorConta);
    printf("Valor a pagar: R$ %.2f\n", valorPagamento);


 return 0;
 
 }