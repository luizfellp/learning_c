#include <stdio.h>
#include <stdlib.h>


int main(){
/*Escrever um programa que leia um conjunto de 4 valores: i, a, b e c, onde i é um valor
inteiro e positivo e a, b e c são quaisquer valores reais. O programa deve imprimir os valores de a, b, c na
ordem indicada pelo valor de i, conforme explicitado a seguir:
• Se i = 1 escrever os três valores a, b, c em ordem crescente.
• Se i = 2 escrever os três valores a, b, c em ordem decrescente.
• Se i = 3 escrever os três valores a, b, c de forma que o maior número entre a, b, c fique no meio dos
outros dois números e e o menor fique por último.
Entrada
O programa deve ler uma linha com um número inteiro na entrada e outras três linhas, cada uma con-
tendo um valor real (float)
Saída
O programa deve imprimir uma linha contendo os três números reais, na ordem indicada pela primeira
linha da entrada. Os três números devem possuir duas casas decimais e devem estar separados entre si por
um espaço. O último número a ser impresso deve ser seguido imediatamente por um caractere de quebra de
linha*/

int op;
float a,b,c;
float temp;

    scanf("%i", &op);
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    if(op==1){
        if(b>c){
            temp=b;
            b=c;
            c=temp;
        }
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        } 
        printf("%.2f %.2f %.2f", a,b,c);
    }

    if(op==2){
        if(a<b){
            temp=a;
            a=b;
            b=temp;
        }
        if(b<c){
            temp=b;
            b=c;
            c=temp;
        }
        if(a<b){
            temp=a;
            a=b;
            b=temp;}
       
        printf("%.2f %.2f %.2f", a,b,c);
    }

    if(op==3){
        if(a<b){
            temp=a;
            a=b;
            b=temp;
        }
        if(b<c){
            temp=b;
            b=c;
            c=temp;
        }
        if(a<b){
            temp=a;
            a=b;
            b=temp;}
        if(a>b){
            temp=a;
            a=b;
            b=temp;}
        
        printf("%.2f %.2f %.2f", a,b,c);
    }

    return 0;
}


