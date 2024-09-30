#include <stdio.h>

int main(){
    
/*Faça um algoritmo que leia uma data no formato ddmmaaaa usando um único número inteiro. Escreva
a mesma data no formato dia/mês/ano, <dia> de <mês por extenso> de <ano>. O programa deve verificar
se o número informado representa uma data válida. Caso não seja, imprimir na tela a mensagem "Data
invalida!". Considere que o ano em questão nunca é bissexto, ou seja, fevereiro tem somente 28 dias.
Entrada
Um número inteiro positivo com 8 dígitos.
Saída
O programa deve apresentar a transcrição da data no formado "dd de mês por extenso de aa*/

    int data;
    int numDiatotal,numMestotal,numAnototal;
    
    scanf("%d", &data);
    
    /*numDiatotal=data/1000000; //final Dia//
    numDiaTemp=numDiatotal*100;
    
    numMes1=data/10000;
    numMestotal=numMes1%numDiaTemp; //final Mês//
    
    numAnotemp1=data/10000;
    numAnotemp2=numAnotemp1*1000;
    numAnototal=data%numAnotemp2; //final Ano//*/
    
    numDiatotal = data / 1000000;  
    numMestotal = (data / 10000) % 100;   
    numAnototal = data % 10000;

    if (numDiatotal <1 || numDiatotal >31){
        printf("Numero Inválido.");
        return 0;
    }
    if (numMestotal <1 || numMestotal >12){
        printf("Numero Inválido.");
        return 0;
    }
    if ((numMestotal == 4 || numMestotal==6 || numMestotal==9 || numMestotal==11) && numDiatotal >30){
        printf("Numero Inválido.");
        return 0;
    }
    if ((numMestotal==2)&& numDiatotal>28){
        printf("Numero Inválido.");
        return 0;
    }
    
    if (numMestotal==1){printf("%i de Janeiro de %i", numDiatotal, numAnototal);}
    if (numMestotal==2){printf("%i de Fevereiro de %i", numDiatotal, numAnototal);}
    if (numMestotal==3){printf("%i de Março de %i", numDiatotal, numAnototal);}
    if (numMestotal==4){printf("%i de Abril de %i", numDiatotal, numAnototal);}
    if (numMestotal==5){printf("%i de Maio de %i", numDiatotal, numAnototal);}
    if (numMestotal==6){printf("%i de Junho de %i", numDiatotal, numAnototal);}
    if (numMestotal==7){printf("%i de Julho de %i", numDiatotal, numAnototal);}
    if (numMestotal==8){printf("%i de Agosto de %i", numDiatotal, numAnototal);}
    if (numMestotal==9){printf("%i de Setembro de %i", numDiatotal, numAnototal);}
    if (numMestotal==10){printf("%i de Outubro de %i", numDiatotal, numAnototal);}
    if (numMestotal==11){printf("%i de Novembro de %i", numDiatotal, numAnototal);}
    if (numMestotal==12){printf("%i de Dezembro de %i", numDiatotal, numAnototal);}
    
    return 0;
}