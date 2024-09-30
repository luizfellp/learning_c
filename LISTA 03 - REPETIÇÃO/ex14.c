#include <stdio.h>

int main(){
    
    /*Em um campeonato de futebol os times são nomeados como Time1, Time2, ..., TimeN. A organização
do campeonato deseja saber quais são as finais possíveis dado a quantidade N de times. Para resolver esse
problema, você foi contratado para fazer um programa de computador que, dada a quantidade N de times,
imprima todas as configurações possíveis de finais.
Entrada
O programa deve ler um número N, inteiro e positivo, referente à quantidade de times do campeonato.
Saída
O programa deve apresentar na tela a sequência de finais com cada linha no formato: Final k: Timei X
Time j, onde k é um contador de finais, i e j são as denominações de cada time. Caso o número de times
informado for menor que 2, então o programa deve imprimir a mensagem: "Campeonato invalido!".*/

int contador = 1, quantidadeTimes, timeA, timeB;

    scanf("%i", &quantidadeTimes);
    
    if (quantidadeTimes<2){
        printf("Campeonato invalido!");
    }
    
    for(timeA=1;timeA<=quantidadeTimes;timeA++){
        for(timeB = timeA + 1; timeB <= quantidadeTimes; timeB++){
            printf("Final %d: Time%d X Time%d\n", contador, timeA, timeB);
            contador++;
        }
    }
    return 0;
}