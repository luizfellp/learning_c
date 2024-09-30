#include <stdio.h>

int main(){
    
    /*Faça um programa que leia um número e verifique se ele é palíndromo. Um número é palíndromo
quando representa a mesma quantidade lido da esquerda para a direita e da direita para a esquerda. Neste
exercício o usuário irá informar números inteiros de no máximo 5 dígitos.
Entrada
Um número inteiro.
Saída
Se o número fornecido exceder 5 dígitos o programa deve imprimir a mensagem "NUMERO INVA-
LIDO". Caso o número seja válido o programa deve imprimir a mensagem "PALINDROMO", caso o
número seja palíndromo, ou "NAO PALINDROMO"caso contrário.*/

int n,temp,digito,reverso=0;

scanf("%i", &n);

    if(n>99999 || n < -99999){
        printf("NUMERO INVALIDO");
    }
    
    temp = n;

    while (temp != 0) {
        digito = temp % 10;     
        reverso = reverso * 10 + digito;  
        temp /= 10;}

    if(n==reverso){
        printf("PALINDROMO");
    } else {
    printf("NÃO PALINDROMO");}

    return 0;
}