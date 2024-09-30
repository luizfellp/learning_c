#include <stdio.h>

/*Escreva um programa que leia n números e apresente sua média. Você deve implementar uma função,
denominada le_numero, que leia um número via terminal e retorne seu valor. A leitura dos dados deve ser
realizada via a função le_numero. A função deve seguir o protótipo:
1 double le_numero();
Entrada
O programa deve ler um número n e em seguida n números reais.
Saída
O programa deve apresentar a média dos números lidos com 2 casas decimais*/

double le_numero(){
    
    double num;
    scanf("%lf", &num);
    return num;
}

int main(){

int Num, contador;
double soma=0.0;


    scanf("%d", &Num);

    for(contador=0; contador<Num; contador++){
        soma += le_numero();
        
    }

    printf("%.2lf\n", soma / Num);

    return 0;
}


