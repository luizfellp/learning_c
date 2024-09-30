#include <stdio.h>

int main(){
    
    /*Faça um programa que leia um número N e informa se o número é primo ou não.
Entrada
O programa deverá ler um número inteiro N positivo.
Saída
O programa deverá apresentar a mensagem "PRIMO"caso N seja primo e "NAO PRIMO"caso contrario.
Caso o valor de N seja um número inteiro negativo, o programa deve apresentar a mensagem "Numero
invalido!"*/

int n, i;

scanf("%d", &n);

    for(i=2;i<n;i++){
        
        if(n%i==0){
            printf("NÃO PRIMO");
            return 1;
        }
        
    }

printf("PRIMO");

    return 0;
}