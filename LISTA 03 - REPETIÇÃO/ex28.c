#include <stdio.h>

int main(){
    
    /*Em uma certa loja de eletrodomésticos, um vendedor recebe um salário mínimo mais comissão. Essa
comissão é calculada com base no tipo e na quantidade de televisores vendidos durante o mês, obedecendo
ao quadro abaixo:
Tipo Num. de Televisores vendidos Comissões
1 ≥ 10 14% do preço por televisor vendido
<10 13% do preço por televisor vendido
2 ≥ 20 13% do preço por televisor vendido
<20 12% do preço por televisor vendido
Sabe-se ainda que há um desconto de 8% sobre o salário bruto para o INSS. Se o salário total (mínimo +
comissão − INSS) ultrapassar o limite de isenção do imposto de renda, será descontado 15% do valor que
ultrapassar o limite de isenção do imposto de renda retido na fonte. Escreva um programa que leia o valor do
salário mínimo, o valor do limite de isenção de imposto, o valor do televisor de tipo 1, o valor do televisor
do tipo 2 e leia vários casos de teste, cada um contendo a matrícula (inteiro) de um vendedor, o número
de televisores de tipo 1 vendido pelo vendedor (inteiro) e o número de televisores do tipo 2 vendido pelo
vendedor. O programa deve terminar ao ler uma matrícula igual a zero. Para cada vendedor, o programa
deve imprimir sua matrícula, computar e imprimir seu salário bruto e seu salário líquido.
Entrada
O programa deve ler uma linha inicial contendo o valor do salário mínimo, o valor do limite de isenção
de imposto de renda, o preço do televisor do tipo 1 e o preço do televisor do tipo 2. Esses valores são
números reais, separados entre si por um espaço. Após a primeira linha na entrada, o programa deve ler
várias linhas contendo, cada uma, o número de matrícula de um funcionário, o número de televisores do
tipo 1 e o número de televisores do tipo 2 que ele vendeu. Esses valores devem estar separados entre si por
um espaço. O programa termina quando ler uma linha com os três valores iguais a zero.
Saída
O programa deve imprimir uma linha para cada funcionário relacionado na entrada, contendo a seguinte
frase: MATRICULA = x, SALARIO BRUTO = y, SALARIO LIQUIDO = z. Os valores de x, y e z devem
ter duas casas decimais. Após o valor de z o programa deve imprimir o caractere de quebra de linha.*/
    
    int matricula;
    float valorSalMin, valorIsenção, precoTv1, precoTv2;
    float vendasTv1, vendasTv2;
    float comissãoTv1,comissãoTv2;
    float valorSalMinPreDescont, valorSalMinPosDescont, salarioTotal;
    
    scanf("%f %f %f %f", &valorSalMin, &valorIsenção, &precoTv1, &precoTv2);
    
    while(1){
        
    if (valorSalMin==0){
        break;
    }
    
    scanf ("%i %f %f", &matricula, &vendasTv1, &vendasTv2);
    
    if (vendasTv1>10){
        comissãoTv1 = ((precoTv1/100)*14)*vendasTv1;
    }
    if (vendasTv1<10){
        comissãoTv1 = ((precoTv1/100)*13)*vendasTv1;
    }

    if (vendasTv2>20){
        comissãoTv2 = ((precoTv2/100)*13)*vendasTv2;
    }
    if (vendasTv2<20){
        comissãoTv2 = ((precoTv2/100)*12)*vendasTv2;
    }
    
    valorSalMinPreDescont = valorSalMin + comissãoTv1 + comissãoTv2;


    if(valorSalMinPreDescont>valorIsenção){
        
    valorSalMinPosDescont = valorSalMinPreDescont - ((valorSalMinPreDescont/100)*15);
        
    }
    if(valorSalMinPreDescont<valorIsenção){
        
    valorSalMinPosDescont = valorSalMinPreDescont - ((valorSalMinPreDescont/100)*8);
        
    }
    
    printf("MATRICULA = %i, SALARIO BRUTO = %.2f, SALARIO LIQUIDO = %.2f", matricula, valorSalMinPreDescont, valorSalMinPosDescont);
    
}
    
    return 0;
}