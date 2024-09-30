#include <stdio.h>
#include <math.h>

/*screva um algoritmo par ler um valor em reais e calcular qual o menor número possível de notas de $R
100, $R 50, $R 10 e moedas de $R 1 em que o valor lido pode ser decomposto. O programa deve escrever
a quantidade de cada nota e moeda a ser utilizada.
Você deve escrever uma função converteEmNotasMoedas que possui 5 parâmetros. O primeiro pa-
râmetro corresponde ao valor inteiro a ser convertido em notas e moedas, o segundo parâmetro corresponde
ao número de notas de 100, o terceiro, corresponde ao número de notas de 50, o quarto, corresponde ao
número de notas de dez e o quinto parâmetro corresponde ao número de moedas de 1 Real. Seu programa
deve chamar essa função para resolver o problema proposto.
Entrada
O programa deve ler uma única linha na entrada, contendo um valor em Reais. Considere que somente
um número inteiro seja fornecido como entrada.
Saída
O programa deve imprimir quatro frases, uma em cada linha: NOTAS DE 100 = X, NOTAS DE 50 =
Y , NOTAS DE 10 = Z, MOEDAS DE 1 = W , onde X, Y , Z e W correspondem às quantidades de cada nota
ou moeda necessárias para corresponder ao valor em Reais dado como entrada. Após cada quantidade, o
programa deve imprimir um caractere de quebra de linha: ‘\n*/


void converteEmNotasMoedas(int valor, int *notas100, int *notas50, int *notas10, int *moedas1) {
    *notas100 = valor / 100; 
    valor %= 100; 
    *notas50 = valor / 50; 
    valor %= 50; 
    *notas10 = valor / 10; 
    valor %= 10; 
    *moedas1 = valor; 
}

int main() {
    int valor; 
    scanf("%d", &valor);
    int notas100, notas50, notas10, moedas1; 

    converteEmNotasMoedas(valor, &notas100, &notas50, &notas10, &moedas1);

    printf("NOTAS DE 100 = %d\n", notas100); 
    printf("NOTAS DE 50 = %d\n", notas50); 
    printf("NOTAS DE 10 = %d\n", notas10); 
    printf("MOEDAS DE 1 = %d\n", moedas1); 

    return 0;
}
