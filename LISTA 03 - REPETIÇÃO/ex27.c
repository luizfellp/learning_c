#include <stdio.h>

int main() {
    
    /*Tia Zélia é uma professora muito dedicada. Ela está explicando as relações de ordem entre números
para seus alunos. Na aula de hoje ela explicou a relação “menor que” representada pelo operador <. Ela
explicou também sobre as propriedades dessa relação entre os números, incluindo a propriedade transitiva,
isto é, se x < y e y < z, então x < z. Tia Zélia quer fazer um treinamento com seus alunos. Ela quer propor
o seguinte exercício aos seus queridos pupilos: apresentar a eles várias sequências de números e pedir
que eles analisem cada sequência e que indiquem se ela está na ordem crescente. Para isso, tia Zélia quer
sua ajuda. Ela vai editar um arquivo com várias seqüências de números; para cada sequência haverá duas
linhas no arquivo: uma com um número inteiro indicando o tamanho da sequência e a linha imediatamente
seguinte contém a sequência de valores reais propriamente dita, formada por números separados por um
espaço, a menos do último valor que vem seguido diretamente por um caractere de quebra de linha. Ela
quer gerar seqüências de números sem ter o trabalho de verificar se formam sequência ou não. Ela quer que
um programa de computador faça isso para ela. Tia Zélia ficou sabendo que você é aluno de Introdução à
Programação do INF-UFG e que os alunos dessa disciplina são exímios programadores! Portanto ela pede
a você que faça um programa que resolva esse problema para ela.
Entrada
Para cada sequência numérica há na entrada duas linhas: uma com, apenas um valor inteiro, indica o
número de valores reais que deve ocorrer na próxima linha. A linha seguinte contém tantos valores quanto
indicado na linha anterior. Entre dois valores há apenas um espaço e após o último valor há um caractere
de quebra de linha. A última linha da entrada contém um tamanho de sequência igual a zero e serve apenas
para indicar término do processamento. Não há uma linha com sequência de valores após a ocorrência de
uma linha com valor zero.
Saída
Para cada seqüência da entrada o seu programa deve emitir uma das seguintes respostas: ORDENADA,
se a sequência estiver em ordem crescente de valores ou DESORDENADA, em caso contrário. Após cada
palavra impressa deve haver apenas um caractere de quebra de linha.*/

int tamanho, i;
float anterior, atual;
    
    while (1) {
        
        scanf("%d",&tamanho);
        if (tamanho == 0) 
            break;
        

        int ordenada = 1;
        scanf("%f", &anterior);

        for (i=1 ; i < tamanho; i++) {
            scanf("%f", &atual);

            if (anterior >= atual) {
                ordenada =0;
            }
            anterior=atual; }

        if(ordenada) 
            printf("ORDENADA\n");
        else
             printf("DESORDENADA\n");
    }
    return 0;
}