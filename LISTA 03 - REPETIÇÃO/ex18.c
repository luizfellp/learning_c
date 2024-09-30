#include <stdio.h>

int main(){
/*Uma companhia de teatro deseja dar uma série de espetáculos. A direção calcula que o ingresso sendo
vendido ao valor comum de mercado (ValorIngresso), serão vendidos 120 ingressos e que as despesas fixas
serão de R$ 200,00 mais R$ 0,05 por cada ingresso. Diminuindo-se R$ 0,50 o preço dos ingressos, espera-
se que as vendas aumentem em 25 ingressos. Aumentando-se R$ 0,50 o preço dos ingressos, espera-se
que as vendas diminuam 30 ingressos. Para resolver este problema, a companhia de teatro deseja que você
faça um programa que escreva uma lista de valores de lucros esperados em função do preço do ingresso,
fazendo-se variar esse preço de A a B de R$ 1,00 em R$ 1,00. O programa deve apresentar na tela um
resumo contendo o preço do ingresso informado, o lucro máximo calculado e a quantidade de ingressos
vendidos para a obtenção desse lucro.
Entrada
O programa deve ler três números reais: ValorIngresso, correspondente ao valor de mercado dos in-
gressos, ValorInicial e ValorFinal correspondentes ao intervalo de valores que se deseja testar. Caso o
ValorInicial informado seja maior ou igual ao ValorFinal, o programa deve encerrar após apresentar a
mensagem: "INTERVALO INVALIDO."
Saída
O programa deve apresentar na tela uma linha para cada valor testado com o seguinte formato: "V:
xxx.xx, N: xxx, L: xxx.xx", onde V é o valor do ingresso, N é a quantidade de ingressos vendidos e L o
lucro obtido. Ao final, o programa deve apresentar um resumo contendo três linhas com o seguinte formato:
"Melhor valor final: xxx.xx"
"Lucro: xxx.xx"
"Numero de ingressos: xx"
Observações
Todos os valores reais devem ser apresentados com 2 casas decimais. Caso o intervalo de valores
indicados não produza lucro positivo, os valores que devem aparecer no resumo devem assumir o valor
zero.*/

float contador=0, valorIngresso, valorInicial, valorFinal;
float N, L;
float melhorLucro=0,melhorValorFinal=0,numeroFinalIngressos=0;

    scanf("%f", &valorIngresso);
    scanf("%f", &valorInicial);
    scanf("%f", &valorFinal);

    for(contador=valorInicial;contador<=valorIngresso;contador++){
        
        printf("V: %.2f, ", contador);
        N=((valorIngresso-contador)*50)+ 120;
        L=N*contador - ((0.05*N)+ 200);
        printf("N: %.2f, ", N);
        printf("L: %.2f, ", L);
        printf("\n");
        
            if (L > melhorLucro) {
            melhorLucro = L;
            melhorValorFinal=contador;
            numeroFinalIngressos=N;
            }
    }
    
    for(contador=valorIngresso+ 1;contador<=valorFinal;contador++){
        
        printf("V: %.2f, ", contador);
        N=((valorIngresso-contador)*60)+ 120;
        L=N*contador - ((0.05*N)+ 200);
        printf("N: %.2f, ", N);
        printf("L: %.2f, ", L);
        printf("\n");
        
            if (L > melhorLucro) {
            melhorLucro = L;
            melhorValorFinal=contador;
            numeroFinalIngressos=N;
            }
        
    }
    
    printf("Melhor valor final: %.2f \n", melhorValorFinal);
    printf("Lucro: %.2f \n", melhorLucro);
    printf("Numero de INgressos: %.2f", numeroFinalIngressos);

    return 0;
}


