#include <stdio.h>

int main()
{
/*
A disciplina de Introdução à Programação possui oito provas, cinco listas de exercícios e uma nota de
trabalho final. Para que um aluno seja aprovado por nota na disciplina, ele deve obter uma nota final maior
ou igual a seis. A nota final é computada pela seguinte fórmula:
NF = 0.7 · MP + 0.15 · ML + 0.15 · NT (2)
onde MP é a média aritmética das notas de prova, ML é a média aritmética das notas das cinco listas e NT
é a nota do trabalho final.
Para ser aprovado na disciplina o aluno deve ter presença igual a ou superior a 75% da carga horária da
disciplina que no caso de Introdução à Programação é 128 horas.
Escreva um programa para ler as notas de cada aluno de uma turma, computar a nota final do aluno e
imprimir a nota final e uma indicação da situação final do aluno. Essa indicação pode ser uma das seguintes
alternativas:
• Aprovado - se o aluno teve NF ≥ 6 e presença superior à quantidade de horas mínima.
• Reprovado por nota - se o aluno teve a presença minima, mas sua nota NF não é suficiente para ser
aprovado.
• Reprovado por frequência insuficiente - o aluno obteve nota NF superior ou igual a seis mas sua
presença às aulas não foi suficiente para ser aprovado.
• Reprovado por frequência e por nota - o aluno não alcançou o valor mínimo de NF e também não
tem frequência mínima para aprovação.
Entrada
A entrada contém várias linhas, cada uma contendo os dados de um aluno separados entre si por um
espaço. O primeiro valor em uma linha corresponde à matrícula do aluno (um valor inteiro sem sinal).
Os próximos oito valores seguintes correspondem às notas das oito provas. Os seguintes cinco valores
correspondem às notas obtidas nas listas de exercícios. O penúltimo valor corresponde a nota do trabalho
final e o último valor em uma linha corresponde à presença do aluno. A última linha da entrada contém
todos os valores iguais a −1 essa linha serve apenas para indicar o fim da entrada e não deve ser processada.
Saída
O programa deve gerar uma linha para cada aluno contendo a seguinte frase: “Matricula: m, Nota Final:
n, Situação Final: s”. O valor de m corresponde à matricula de um aluno, o valor de n corresponde ao valor
da nota final (NF) do aluno e s é uma das seguintes frases correspondendo à situação final do aluno:
• APROVADO
• REPROVADO POR FREQUENCIA
• REPROVADO POR NOTA
• REPROVADO POR NOTA E POR FREQUENCIA*/

int matricula;
float notasProvas[8], notasListas[5], notaTrabalho, presença, MP, ML, notaFinal;
int contador;



while (1){

    scanf("%i" , &matricula);
    if (matricula==-1){
        break;
    }

    for (contador=0; contador<8;contador++){

        scanf("%f", &notasProvas[contador]);
    }

    for (contador=0; contador<5;contador++){

        scanf("%f", &notasListas[contador]);
    }

  scanf("%f", &notaTrabalho);

  scanf("%f", &presença);

    MP=0.0;
    for (contador=0;contador<8;contador++){
            MP += notasProvas[contador];
    }
    MP /=8;

    ML=0.0;
    for (contador=0;contador<5;contador++){
            ML += notasListas[contador];
    }
    ML /=5;

    notaFinal = (0.7 * MP)+(0.15 * ML)+(0.15 * notaTrabalho);

    if (notaFinal >=6 && presença >=96){
        printf("Matricula: %i, Nota Final: %.2f, Situacao Final: APROVADO." , matricula, notaFinal);
    }
    if (notaFinal >=6 && presença <96){
        printf("Matricula: %i, Nota Final: %.2f, Situacao Final: REPROVADO POR FREQUÊNCIA." , matricula, notaFinal);
    }
    if (notaFinal <6 && presença >=96){
        printf("Matricula: %i, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA." , matricula, notaFinal);
    }
    if (notaFinal <6 && presença <96){
        printf("Matricula: %i, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA E FREQUÊNCIA." , matricula, notaFinal);
    }
}

 return 0;
}