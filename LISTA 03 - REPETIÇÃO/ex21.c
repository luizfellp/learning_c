#include <stdio.h>

int main(){
    
/*João tem um irmão mais novo, José, que começou a ir à escola e já está tendo problemas com números.
Para ajudá-lo a pegar o jeito com a escala numérica, sua professora escreve dois números de três dígitos
e pede a José para comparar esses números. Mas em vez de interpretá-los com o dígito mais significativo
à esquerda, ele deve interpretá-lo com o dígito mais significativo à direita. Ele tem que dizer à professora
qual o maior dos dois números. Escreva um programa que irá verificar as respostas de José.
Entrada
A entrada conterá um inteiro T , o número de casos de testes, e, para cada caso de teste, uma única linha
com dois números de três dígitos, A e B, os quais não serão iguais e não conterão zeros.
Saída
A saída deve conter, numa linha para cada caso de teste, com o maior dos números na entrada, compa-
rados como descrito no enunciado da tarefa. O número deve ser escrito invertido, para mostrar a José como
ele deve lê-lo.*/

int casoTestes, num1, num2;
int num1Centena, num1Dezena, num1Unidade;
int num2Centena, num2Dezena, num2Unidade;
int num1Final, num2Final;
int contador;

    scanf("%i", &casoTestes);
    
    for (contador=0;contador<casoTestes;contador++){
    scanf("%i %i", &num1, &num2);
    
    num1Unidade=num1%10;
    num1Dezena=(num1/10)%10;
    num1Centena=num1/100;
    
    num2Unidade=num2%10;
    num2Dezena=(num2/10)%10;
    num2Centena=num2/100;
    
    num1Unidade=num1Unidade*100;
    num1Dezena=num1Dezena*10;
    num1Final=num1Unidade+num1Dezena+num1Centena;
    
    num2Unidade=num2Unidade*100;
    num2Dezena=num2Dezena*10;
    num2Final=num2Unidade+num2Dezena+num2Centena;
    
    if(num1Final>num2Final){
        printf("%i \n", num1Final);
    } else{
        printf("%i \n", num2Final);
    }
}
    return 0;
}