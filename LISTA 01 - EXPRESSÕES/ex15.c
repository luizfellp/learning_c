#include <stdio.h>

int main ()
{
    /* Escreva um algoritmo em Linguagem C que leia um número 0 ≤ n ≤ 255 na base decimal e apresente
sua representação em binário. Caso o número informado não esteja no intervalo especificado, o programa
deve finalizar imprimindo a mensagem “Numero invalido!” na tela. A transformação de um número na
base decimal para binária é obtida pela sequência de divisões por 2. O número 123, por exemplo, tem sua
representação binária 01111011 porque:
Não é permitido o uso de outras bibliotecas além da stdio.h.
Entrada
O programa deve ler um número inteiro qualquer.
Saída
Caso o número lido esteja fora do intervalo especificado, o programa deve imprimir a mensagem "Nu-
mero invalido!"e encerrar. Caso o número lido seja válido, o programa deve apresentar a representação
binária de n na tela.
Observações
Neste problema, todos os números binários deverão conter 8 bits. O número zero (em decimal), por
exemplo, tem sua representação binária 00000000. O número 1 = 00000001, o 2 = 000000010 e assim por
diante.*/

int numero, binário, i;
int binvetor[8];


 printf ("Informe um número entre 0 a 255:");
 scanf("%d" , &numero);

 if (numero <0 || numero >255){
    printf ("Número Inválido.");
    return 0;
}

 printf ("Correto. Calculando seu resultado\n");
 
 for (binário = 7; binário>=0; binário--){
        binvetor[binário] = numero % 2;
        numero = numero/2;}
 
  printf("Representação binária: ");
  
    for (binário = 0;binário < 8; binário++) {
        printf("%d", binvetor[binário]);}



 return 0;

}