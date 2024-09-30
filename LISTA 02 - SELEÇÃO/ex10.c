#include <stdio.h>

int main()
{
/* Escreva um algoritmo em Linguagem C que leia um número inteiro (maior que zero e de no máximo 4
dígitos), imprima na tela quantas unidades de milhar, centenas, dezenas e unidades formam o número e a
qual ordem o número pertence.
Entrada
O programa deve ler um número inteiro.
Saída
O algoritmo deve imprimir a mensagem “Numero invalido!” se o número não está dentro do intervalo
estabelecido e, caso seja válido, realizar a decomposição do número e decidir se as palavras devem ser
impressas no singular ou no plural. Caso a quantidade de uma ordem seja 0, o algoritmo não deve imprimir
a quantidade da ordem. O algoritmo deve reproduzir fielmente os exemplos abaixo.*/

int num;
int milhar,centena,dezena,unidade;
int milhar2,centena2,dezena2,unidade2;

scanf("%i" , &num);

if (num>0 && num<=9999){
    
    if (num>999){
        printf("(Quarta Ordem) ");}
    if (num>99 && num<=999){
        printf("(Terceira Ordem) ");}
    if (num>9 && num <=99){
        printf("(Segunda Ordem) ");}
    if (num<=9){
        printf("(Primeira Ordem) ");}
    
    milhar=num/1000;
    centena=(num/100)%10;
    dezena=(num/10)%10;
    unidade=num%10;
    
    if (milhar >0)
    printf("%i %s de milhar + ", milhar, milhar == 1 ? "unidade" : "unidades");

    if (centena >0)
    printf("%i %s + ", centena, centena == 1 ? "centena" : "centenas");

    if (dezena >0)
    printf("%i %s + ", dezena, dezena == 1 ? "dezena" : "dezenas");
    
    if (unidade >0)
    printf("%i %s", unidade, unidade == 1 ? "unidade" : "unidades");
    
    milhar2=(num/1000)*1000;
    centena2=((num/100)%10)*100;
    dezena2=((num/10)%10)*10;
    unidade2=num%10;
    
    printf (" = ");
    
      if (milhar2>0)
    printf("%i + " , milhar2);
    
      if (centena2>0)
    printf("%i + " , centena2);
    
      if (dezena2 >0)
    printf("%i + " , dezena2);
    
      if (unidade2>0)
    printf("%i" , unidade2);
    
    
    
} else {
    printf("Numero invalido!");
}


 return 0;
 }