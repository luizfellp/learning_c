#include <stdio.h>

int mdc(int a, int b) {
    return b == 0 ? a : mdc(b, a % b);
}

int main() {
    
    /*Faça um programa que leia um número decimal e o converta para sua representação em fração simplifi-
cada.
Entrada
O programa deve ler um número real N.
Saída
O programa deve apresentar uma linha contendo a fração simplificada, correspondente ao número N
informado. A fração deve ser apresentada no formato num/den, onde num e den são o numerador e o
denominador respectivamente.*/
    
    double N;
    int num, den, divisor;

    scanf("%lf", &N);
    
    den = 1000000;
    num = (int)(N * den);
    
    divisor = mdc(num, den);
    
    num /= divisor;
    den /= divisor;
    
    printf("%d/%d\n", num, den);
    
    return 0;
}
