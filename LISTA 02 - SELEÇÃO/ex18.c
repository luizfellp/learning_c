#include <stdio.h>

int main(){
/*Você receberá três valores inteiros e deve descobrir quais deles correspondem às variáveis a, b e c. Os
números não serão dados em ordem exata, mas sabemos que o valor correspondente a a é menor do que
o valor correspondente a b, e que o valor correspondente a b é menor do que o correspondente a c . Será
informada a você a ordem em que os valores associados a cada variável devem ser impressos. Escreva um
programa que imprima os valores na ordem requisitada.
Entrada
A entrada conterá duas linhas. A primeira, com três números inteiros positivos, separados entre si por
um espaço. Todos os três números são inferiores ou iguais a 100. A segunda linha conterá três letras
maiúsculas A, B e C (sem espaços entre elas) representando a ordem desejada de impressão dos valores das
variáveis.
Saída
A saída deve conter, numa linha, os inteiros a, b e c na ordem desejada, separados por espaços simples.
Após o último número da saída deve aparecer apenas o caractere de quebra de linha: ‘\n’.
Observações
Após o último número na primeira linha da entrada, está no buffer de entrada o caractere ‘\n’. Com
isso ao tentar ler o primeiro caractere (A, B, ou C) na segunda linha de entrada com scanf("%d", &x);
será lido o caractere ‘\n’ na variável x, ao invés de uma das letras na entrada (A, B, ou C). Para evitar isso,
você pode fazer com que a leitura do último número na primeira linha consuma o caractere ‘\n’ da primeira
linha, colocando esse caractere na especificação de formato do scanf(). Por exemplo, suponha que você
declarou as seguintes variáveis na entrada: int a, b,c; para armazenar os três número da primeira linha
e char x, y, z;, para armazenar as três letras que aparecem na segunda linha de entrada. A leitura dessas
variáveis de entrada pode ser realizada assim: scanf("%d %d %d\n", &a, &b, &c); scanf(%c%c%c",
&x, &y, &z); Repare o ‘\n’ ao final da formatação do primeiro scanf e repare que não há espaços entre
os "%c"na formatação do segundo scanf. O ‘\n’. ao final da formatação do primeiro scanf() faz com que
o caractere de quebra de linha seja consumido no buffer. Asssim, no segundo scanf() será armazenada na
variável x a primeira letra da segunda linha e não o ‘\n’, resolvendo o problema da leitura*/

int num1, num2, num3, temp;
    int a, b, c;
    char let1, let2, let3;

    scanf("%d %d %d", &num1, &num2, &num3);
    scanf(" %c%c%c", &let1, &let2, &let3);

   printf("Passei algumas horas nesse exercicio. E nem com o viado do ChatGPT eu consegui. Logo, tive que pular ele pra não atrasar o resto.");

 /*   
    if (num1 > num2) { temp = num1; num1 = num2; num2 = temp; }
    if (num1 > num3) { temp = num1; num1 = num3; num3 = temp; }
    if (num2 > num3) { temp = num2; num2 = num3; num3 = temp; }

    a = num1;
    b = num2;
    c = num3;

    if (let1 == 'A') printf("%d ", a);
    else if (let1 == 'B') printf("%d ", b);
    else if (let1 == 'C') printf("%d ", c);

    if (let2 == 'A') printf("%d ", a);
    else if (let2 == 'B') printf("%d ", b);
    else if (let2 == 'C') printf("%d ", c);

    if (let3 == 'A') printf("%d\n", a);
    else if (let3 == 'B') printf("%d\n", b);
    else if (let3 == 'C') printf("%d\n", c);*/

/*    if(num1>num2){
        temp=num1;
        num1=num2;
        num2=temp;
        temp=0;
    }
    if(num2>num3){
        temp=num2;
        num2=num3;
        num3=temp;
        temp=0;
    }
    if(num1>num2){
        temp=num1;
        num1=num2;
        num2=temp;
        temp=0;
    }


    if(let1=='A'&&let2=='B'&&let3=='C'){
        
        a=num1;
        b=num2;
        c=num3;
        
        printf("%d %d %d", a, b, c);
    }
    
    if(let1=='A' && let2=='C' && let3=='B'){
        num2=temp;
        num2=num3;
        num3=temp;
        
        printf("%d %d %d", num1, num2, num3);
    }
    
    if(let1=='B' && let2=='A' && let3=='C'){
        num1=temp;
        num1=num2;
        num2=temp;
        
        
        printf("%d %d %d", a, b, c);
    }
    
    if(let1=='B' && let2=='C' && let3=='A'){
        num1=temp;
        num1=num2;
        num2=num3;
        num3=temp;
        
        printf("%d %d %d", num1, num2, num3);
    }
    
    if(let1=='C' && let2=='B' && let3=='A'){
        num1=temp;
        num1=num3;
        num3=temp;
        
        printf("%d %d %d", num1, num2, num3);
    }
    
    if(let1=='C' && let2=='A' && let3=='B'){
        num1=temp;
        num1=num3;
        num3=num2;
        num2=temp;
        
        printf("%d %d %d", num1, num2, num3);
    }*/

    return 0;
}