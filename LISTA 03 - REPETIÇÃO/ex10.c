#include <stdio.h>

int main()
{
/*
Escreva um programa em linguagem C que leia um número qualquer n de 0 a 9 e imprima na tela
a tabuada de soma, subração, multiplicação e divisão desse número para o K valores, iniciando em i em
incrementos de s.
Entrada
O programa deve ler quatro números quaisquer n, i, K e s.
Saída
O programa deve apresentar, em sequência, a tabuada de soma, subtração, multiplicação e divisão,
com o texto: "Tabuada de soma:", "Tabuada de subtracao:", "Tabuada de multiplicacao:"e "Tabuada de
divisao:"antes de cada tabuada. Cada linha da tabuada segue o formado: "n op B = R", onde n é o número
lido, B é o segundo termo da tabuada, op é o operador da tabuada e R o resultado da operação. Os números
devem ser apresentados com 2 casas decimais.*/

float contador, totalop, n, i, k , s, resposta;

scanf("%f", &n);
scanf("%f", &i);
scanf("%f", &k);
scanf("%f", &s);

printf("Tabuada de soma:\n");
    for (contador=0; contador < k; contador++){
        
        totalop = i + (contador * s);
        resposta = n + totalop;
        printf ("%.2f + %.2f = %.2f\n", n, totalop, resposta);
        
    }
    
printf("Tabuada de subtração:\n");
    for (contador=0; contador < k; contador++){
        
        totalop = i + (contador * s);
        resposta = n - totalop;
        printf ("%.2f + %.2f = %.2f\n", n, totalop, resposta);
        
    }

printf("Tabuada de multiplicação:\n");
    for (contador=0; contador < k; contador++){
        
        totalop = i + (contador * s);
        resposta = n * totalop;
        printf ("%.2f + %.2f = %.2f\n", n, totalop, resposta);
        
    }
    
printf("Tabuada de divisão:\n");
    for (contador=0; contador < k; contador++){
        
        totalop = i + (contador * s);
        resposta = n / totalop;
        printf ("%.2f + %.2f = %.2f\n", n, totalop, resposta);
        
    }


return 0;
}