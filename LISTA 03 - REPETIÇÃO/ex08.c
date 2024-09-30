#include <stdio.h>

int main()
{
/*
Supondo que a população de um país A seja de a habitantes com uma taxa anual de crescimento de 3%
e que a população de um país B seja de b habitantes, com uma taxa anual de crescimento de 1,5%, fazer um
algoritmo que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou
iguale a população do país B, mantidas essas taxas de crescimento.
Entrada
O programa deverá ler duas linhas de entrada, cada uma contendo um número inteiro positivo represen-
tando a população de um país. O valor na primeira linha corresponde ao número de habitantes do país A e
será sempre menor que o valor na segunda linha, o qual corresponde ao número de habitantes do país B.
Saída
A saída deve conter, numa linha com a frase ANOS = x, onde x é um valor em anos e deve ser seguido
por um caractere de quebra de linha: ‘\n’.
Exemplo
A seguir são mostrados dois casos distintos de entrada, somente para efeito de ilustração, porém, esse
problema contém apenas um caso de teste na entrada, formado pelas duas linhas de entrada descritas acima.*/

int contador, P1, P2;

scanf("%i", &P1);
scanf("%i", &P2);

    for(contador = 1; P1 < P2; contador++){
        P1 = P1 + ((P1/100)*1.5);
    }

    printf ("ANOS = %i" , contador);

return 0;
}