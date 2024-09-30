#include <stdio.h>
#include <math.h>

int main(){

    /*Um comerciante deseja fazer um levantamento do lucro das mercadorias que ele comercializa. Para
isto, mandou digitar uma linha contendo para cada mercadoria, os seguintes dados:
• O código da mercadoria (unsigned long int).
• O preço de compra da mercadoria (float).
• O preço de venda da mercadora (float).
• O número de vendas da mercadoria (int).
Escreva um programa que leia uma quantidade indefinida de mercadorias e que faça o seguinte:
1. Determine a quantidade de Mercadorias que geraram lucro menor que 10%.
2. Determine a quantidade de Mercadorias que geraram lucro maior ou igual a 10% e menor ou igual a
20%.
3. Determine a quantidade de Mercadorias que geraram lucro maior que 20%.
4. Imprima o código da mercadoria que gerou maior lucro.
5. Imprima o código da mercadoria mais vendida.
6. Determine e escreva o valor total de compra e de venda de todas as mercadorias, assim como o lucro
total.
Entrada
A entrada contém várias linhas, cada uma contendo quatro valores separados entre si por um espaço.
O primeiro valor é um número inteiro que corresponde ao código de uma mercadoria, o segundo valor é
o preço de compra de uma mercadoria, o terceiro, é o valor do preço de venda e o quarto, o número de
unidades da mercadoria que foram vendidas.
Saída
O programa deve gerar seis linhas na saída. A primeira delas contém a frase: “Quantidade de mercado-
rias que geraram lucro menor que 10%: r”, onde r é um número inteiro. A segunda linha contém a frase:
“Quantidade de mercadorias que geraram lucro maior ou igual a 10% e menor ou igual a 20%: s”, onde s é
um número inteiro. A terceira linha contém a frase: “Quantidade de mercadorias que geraram lucro maior
do que 20%: t”, onde t é um número inteiro. A quarta linha contém a frase “Codigo da mercadoria que
gerou maior lucro: u”, onde u é um número inteiro. A quinta linha contem a frase: “Codigo da mercadoria
mais vendida: v” onde v é um número inteiro. A sexta linha Contém a frase: ‘Valor total de compras: x,
valor total de vendas: y e percentual de lucro total: z%”, onde x, y e z são valores reais com duas casas
decimais. Após os valores de r, s,t, u, v e o valor z o programa deve imprimir o caractere de quebra de linha*/
    
int casoTestes;
int contador;
unsigned long int codigo, codigoMaiorLucro=0, codigoMaiorNumVendas=0,calculoMaiorNumVendas=0;
float precoCompra, precoVenda;
int numVendas;
float calculoLucro, maiorLucro=0;
int somaLucroMenor10=0,somaLucroEntre10_20=0,somaLucroMaior20=0;
float valorTotalVendas=0, valorTotalCompras=0;
float calculoLucroTotalPorcentagem;

scanf("%i", &casoTestes);

for(contador=0; contador<casoTestes;contador++){
    
    scanf("%li %f %f %i", &codigo, &precoCompra, &precoVenda, &numVendas);

    calculoLucro = ((precoVenda - precoCompra) / precoCompra) * 100;

    if(calculoLucro > maiorLucro){
        maiorLucro = calculoLucro;
        codigoMaiorLucro = codigo;
    }
    
    if(numVendas > codigoMaiorNumVendas){
        calculoMaiorNumVendas = numVendas;
        codigoMaiorNumVendas = codigo;
    }

    if(calculoLucro < 10){
        somaLucroMenor10++;
    }
    if(calculoLucro >= 10 && calculoLucro <= 20){
        somaLucroEntre10_20++;
    }
    if(calculoLucro > 20){
        somaLucroMaior20++;
    }

    valorTotalCompras += precoCompra * numVendas;
    valorTotalVendas += precoVenda * numVendas;

}

calculoLucroTotalPorcentagem = ((valorTotalVendas - valorTotalCompras) / valorTotalCompras) * 100;

printf("Quantidade de mercadorias que geraram lucro menor que 10: %i \n", somaLucroMenor10);
printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10 e menor ou igual a 20:  %i \n", somaLucroEntre10_20);
printf("Quantidade de mercadorias que geraram lucro maior que 20: %i \n", somaLucroMaior20);
printf("Codigo da mercadoria que gerou maior lucro: %li\n", codigoMaiorLucro);
printf("Codigo da mercadoria mais vendida: %li\n", codigoMaiorNumVendas);
printf("Valor total de compras: %.2f , valor total de vendas: %.2f e percentual de lucro total: %.2f\n", valorTotalCompras, valorTotalVendas, calculoLucroTotalPorcentagem); 

return 0;
}
