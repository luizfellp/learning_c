#include <stdio.h>

int main()
{
/*
Escreva um programa que imprima uma tabela de conversão de graus Fahrenheit para graus Celsius.
Dado um valor de temperatura F medida na escala Fahrenheit, seu valor equivalente C na escala Celsius é
dado pela seguinte equação:
C = 5(F − 32)
9
.
Entrada
A entrada conterá várias linhas. A primeira delas contém o número n de temperaturas em Fahrenheit
a serem convertidas para Celsius. Cada uma das n linhas seguintes contém um valor real (double) com a
medida de uma temperatura em graus Fahrenheit.
Saída
O programa deve imprimir n linhas cada uma no seguinte formato x FAHRENHEIT EQUIVALE A y
CELSIUS, onde x corresponde a um valor de temperatura em Fahrenheit e y corresponde ao valor equiva-
lente em graus Celsius. Logo após a palavra CELSIUS em cada linha de saída deve ser impresso o caractere
de quebra de linha. Os valores de x e y devem ser impressos com duas casas decimais.*/

int contador, casostestes;
double f,c;


scanf("%i" , &casostestes);

    for (contador=1 ; contador <= casostestes ; contador++){
     
     scanf ("%lf" ,&f);
     
     c = (5.0 / 9.0) * (f - 32);
     
     printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n" , f,c);
        
    }

 return 0;
}