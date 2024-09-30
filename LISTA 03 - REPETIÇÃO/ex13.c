#include <stdio.h>

int main(){

/*Faça um programa que leia uma sequência de números inteiros diferente de zero e apresente a média
nos números pares e a média nos números ímpares.
Entrada
O programa deve ler uma sequência de números inteiros diferentes de zero.
Saída
O programa deve apresentar duas linhas, a primeira contendo a mensagem: "MEDIA PAR = mp"e a
segunda com a mensagem: "MEDIA IMPAR = mi", onde mp e mi são os valores das médias dos números
pares e ímpares respectivamente*/

int num;
float somaPar = 0.0, somaImpar = 0.0;
float contadorPar = 0.0, contadorImpar = 0.0;
float mediaPar = 0.0, mediaImpar = 0.0;

    while(1){

        scanf("%d", &num);

        if(num==0){
            break;
        }
        if(num%2==0){
            somaPar+=num;
            contadorPar++;
        }
        if(num%2!=0){
            somaImpar+=num;
            contadorImpar++;
        }

    }

    mediaPar=somaPar/contadorPar;
    mediaImpar=somaImpar/contadorImpar;

    printf("MEDIA PAR = %f \n", mediaPar);
    printf("MEDIA PAR = %f \n", mediaImpar);

    return 0;
}