#include <stdio.h>

int main(){
    
    /*Escreva um programa que leia várias linhas contendo cada uma a matrícula de um funcionário (um valor
inteiro), seu número de horas trabalhadas, o valor que recebe por hora e calcule o salário desse funcionário.
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
Entrada
A entrada é formada por varias linhas, cada uma contendo três valores decimais separados um do outro
por um espaço em branco. O último valor na linha é seguido pelo caractere de quebra de linha (\n). A
última linha contém uma matrícula igual a zero e não deve ser processada. Ela serve apenas para indicar ao
programa o término da entrada de dados.
Saída
A saída deve conter para cada linha de entrada a matrícula, um espaço em branco e o salário calculado
com duas casas decimais
Observações
Para ler uma linha com os três valores, utilize a função scanf: scanf("%d %f %f", &A, &B, &C); e, em
seguida, a função getchar(). A função getchar() é usada para consumir o caractere de quebra de linha na
entrada."*/

int matricula, horasTrabalhadas;
float valorHora, salario;

scanf ("%d %d %f", &matricula, &horasTrabalhadas, &valorHora); getchar();

    while(matricula!=0){

    salario=horasTrabalhadas*valorHora;

    printf("%d %.2f\n", matricula, salario);
    
    scanf ("%d %d %f", &matricula, &horasTrabalhadas, &valorHora); getchar();
}
    return 0;
}