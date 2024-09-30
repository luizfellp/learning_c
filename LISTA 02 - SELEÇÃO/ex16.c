#include <stdio.h>

int main(){
    
    /*Desenvolver um algoritmo que determine o imposto de renda cobrado de um funcionário pelo governo.
Seu programa deverá ler a matrícula de um funcionário, o valor do salário mínimo, o número de dependen-
tes, o salário do funcionário e a taxa de imposto normal que já foi paga pelo funcionário. O imposto bruto
é:
• 20% do salário do funcionário, se o funcionário ganha mais de 12 salários mínimos;
• 8% do salário do funcionário, se o funcionário ganha mais de cinco salários mínimos;
• Zero % do salário do funcionário, se ele ganha cinco salários mínimos ou menos.
Determine o imposto líquido a ser pago pelo funcionário subtraindo R300, 00 no imposto bruto, para cada
dependente do funcionário. O programa calculará e imprimirá o imposto a ser pago ou devolvido, que
é a diferença entre o imposto líquido e o imposto normal descontado do salário do funcionário. Se a
diferença for negativa, o programa deve emitir a mensagem de “imposto a receber”. Se a diferença for um
valor positivo o programa deve emitir a mensagem, “imposto a pagar”, e, se for igual a zero, deve emitir a
mensagem “imposto quitado”.
Entrada
O programa deve ler uma linha contendo cinco valores na entrada, separados entre si por um espaço:
a matrícula (um número inteiro), o valor do salário mínimo (float), o número de dependentes (inteiro), o
salário do funcionário (float) e a taxa de imposto (float), nesta ordem.
Saída
O programa deve imprimir quatro linhas, contendo o seguinte:
• MATRICULA = u, onde u é o valor da matrícula do funcionário;
• IMPOSTO BRUTO = v, onde v é o valor do imposto bruto;
• IMPOSTO LIQUIDO = x, onde x é o valor do imposto líquido;
• RESULTADO = w, onde w é o valor da diferença entre o imposto normal e o imposto líquido;
• A mensagem IMPOSTO A RECEBER, se o valor de w for negativo ou a mensagem IMPOSTO
QUITADO, se w for igual a zero, ou a mensagem IMPOSTO A PAGAR, caso w for maior que zero.
Os valores de v,x e w devem conter duas casas decimais.*/

int matricula,dependentes;
float salarioMin,salarioFunça,taxaImposto;
float impostoBruto,impostoLiquido, valorTaxaImposto1, valorTaxaImposto2, resultado;

    scanf("%i %f %i %f %f" , &matricula, &salarioMin, &dependentes, &salarioFunça, &taxaImposto);

printf("MATRICULA = %i\n", matricula);

    if(salarioFunça<=(salarioMin*5)){
        impostoBruto=0.0;}
        
    if(salarioFunça>(salarioMin*5)&&salarioFunça<=(salarioMin*12)){
        impostoBruto=salarioFunça*0.08;}
        
    if(salarioFunça>(salarioMin*12)){
        impostoBruto=salarioFunça*0.2;}

    printf("IMPOSTO BRUTO = %.2f\n", impostoBruto);
    
 impostoLiquido=impostoBruto-(300.00*dependentes);

    printf("IMPOSTO LIQUIDO = %.2f\n", impostoLiquido);
    
 valorTaxaImposto1=(salarioFunça/100)*taxaImposto;
 valorTaxaImposto2=valorTaxaImposto1-(valorTaxaImposto1*2);
 resultado=valorTaxaImposto2+impostoLiquido;
 
    printf("RESULTADO = %.2f\n", resultado);

    if(resultado<0){
        printf("IMPOSTO A RECEBER");
    }
    if(resultado==0){
        printf("IMPOSTO A QUITADO");
    }
    if(resultado>0){
        printf("IMPOSTO A PAGAR");
    }

    return 0;
}