#include <stdio.h>

int main(){
/*O modelo atual de seleção de alunos para o ingresso em universidades, SISU, considera o uso de cotas.
No momento da inscrição, o candidato apresenta alguns dados que são usados para o enquadrar em uma
das classes de cotistas:
• Cota L1: Candidatos que cursaram todo o ensino médio em escolas públicas, com renda familiar
bruta per capita igual ou inferior a 1,5 salário mínimo
• Cota L2: Candidatos que cursaram todo o ensino médio em escolas públicas, com renda familiar
bruta per capita igual ou inferior a 1,5 salário mínimo, autodeclarados pretos, pardos ou indígenas
• Cota L3: Candidatos que cursaram todo o ensino médio em escolas públicas, independente da renda
• Cota L4: Candidatos que cursaram todo o ensino médio em escolas públicas, independente da renda,
autodeclarados pretos, pardos ou indígenas
Faça um programa que leia os dados do usuário e verifique se o aluno é cotista ou não. Caso seja, o
programa deve verificar qual a classe de cota a qual o aluno pertence. Considere o valor do salário mínimo
igual a R$ 937,00.
Entrada
O programa deve ler 1 número real e 3 inteiros correspondentes às seguintes informações sobre o can-
didato: renda bruta da família, a quantidade de pessoas que compõe a família, o tipo de escola que cursou
o ensino médio (1 - particular; 2 - pública) e a sua etinia (1 – preto; 2 – pardo; 3 – indígena; 4 – branco).
Saída
O programa deve imprimir a mensagem "ALUNO NAO COTISTA"caso o aluno não seja cotista e a
mensagem "ALUNO COTISTA (Lx)"caso o aluno seja cotista. O valor de x deve ser a classe de cotas que
o aluno pertence.*/

int renda;
int integrantesFamilia;
int tipoEscola;
int corPele;
int rendaPerCapita;

scanf("%i %i %i %i", &renda, &integrantesFamilia, &tipoEscola, &corPele);

rendaPerCapita=renda/integrantesFamilia;

    if(rendaPerCapita<=1405.5&&tipoEscola==2&&corPele==1||corPele==2||corPele==3) //L2
    {
        printf("ALUNO COTISTA (L2)");
        return 1;
    }
    if(rendaPerCapita<=1405.5&&tipoEscola==2) //L1
    {
        printf("ALUNO COTISTA (L1)");
        return 1;
    }
    if(tipoEscola==2&&corPele==1||corPele==2||corPele==3) //L4
    {
        printf("ALUNO COTISTA (L4)");
        return 1;
    }
    if(tipoEscola==2) //L3
    {
        printf("ALUNO COTISTA (L3)");
        return 1;
    }
    
        printf("ALUNO NAO COTISTA");

    return 0;
}