#include <stdio.h>

int main ()
{
    /* Fazer um algoritmo que calcule a média aritmética das três notas de um aluno e mostre, além do valor
da média, uma mensagem de "APROVADO", caso a média seja igual ou superior a seis, ou a mensagem
"REPROVADO", caso contrário.
Entrada
A entrada conterá uma linha com as três notas do aluno, separadas entre si por um caractere de espaço.
Saída
A saída deve conter duas linhas. A primeira linha deve conter uma frase com o seguinte formato:
MEDIA = x, onde x é o valor da média entre as três notas do aluno, contendo duas casas decimais. A
segunda linha contém uma das duas mensagens: APROVADO ou REPROVADO. Após o valor da média e
após a mensagem, o programa deve imprimir o caractere de quebra de linha: ‘\n’.*/

float notaluno1,notaluno2,notaluno3,notatotal;
 
 printf ("Informe as 3 notas do aluno (separadas por um espaço):");
 scanf ("%f %f %f" ,&notaluno1, &notaluno2, &notaluno3);
 
 notatotal=(notaluno1+notaluno2+notaluno3)/3;
 
 printf ("MEDIA = %.2f \n" , notatotal);
 
    if(notatotal >=6.0)
      printf("APROVADO\n");
    else
      printf("REPROVADO\n");


return 0;

}