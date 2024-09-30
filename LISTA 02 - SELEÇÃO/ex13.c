#include <stdio.h>

int main()
{
/*
Fazer um programa para quatro valores inteiros e imprimir a soma dos três menores.
Entrada
O programa deve ler quatros valores inteiros na entrada. Cada valor ocupa uma linha na entrada.
Saída
O programa deve imprimir uma linha contendo o valor da soma dos três menores números. Após o valor
da soma, o programa deve imprimir um caractere de quebra de linha: ‘\n’*/

int temp,n1,n2,n3,n4,soma;

scanf("%i", &n1);

scanf("%i", &n2);

    if (n1<n2){
        temp=n1;
        n1=n2;
        n2=temp;
    }
    
scanf("%i", &n3);

    if (n1<n3){
        temp=n1;
        n1=n3;
        n3=temp;
    }
    
scanf("%i", &n4);

    
    if (n1<n4){
        temp=n1;
        n1=n4;
        n4=temp;
    }
    
soma = n2 + n3 + n4;

printf("%d\n", soma);



return 0;
}