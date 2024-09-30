#include <stdio.h>
#include <math.h>

int main ()
{
    /* Dado um número inteiro de três algarismos, construir outro número inteiro de quatro algarismos de
acordo com a seguinte regra: os três primeiros algarismos, contados da esquerda para a direita são iguais ao
número dado. O quarto algarismo é um digito de controle calculado da seguinte forma: primeiro algarismo
+ segundo algarismo×3 + terceiro algarismo×5. O dígito de controle é igual ao resto da divisão dessa soma
por 7.
Entrada
O programa deve ler uma linha de dados contendo apenas um número com três algarismos.
Saída
O programa deve imprimir uma linha contendo a frase: O NOVO NUMERO E = X, onde X é o novo
número inteiro com quatro algarismos, seguido por um caractere de quebra de linha: ‘\n’.*/

int n1,n2,n3,n4,nt1,nt2,nf;

printf ("Informe um número de 3 dígitos separado por vírgulas:");
scanf ("%i,%i,%i" , &n1 , &n2 , &n3 );

n4= ((n1+(n2*3)+(n3*5))/7);
nt1=(n1*100)+(n2*10)+n3;
nt2=nt1+n4;
nf=nt2/10;

printf ("O NOVO NUMERO E = %i \n" , nf);


    return 0;

}