#include <stdio.h>
#include <stdlib.h>


int main(){
/*Leia três valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo,
calcule o perímetro do triângulo e imprima a mensagem:
Perimetro = XX.X
Caso os valores não formem um triângulo, calcule a área do trapézio que tem A e B como base e C como
altura, mostrando a mensagem:
Area = XX.X
Entrada
A entrada é formada por uma linha contendo três valores decimais separados um do outro por um espaço
em branco.
Saída
A saída deve conter em uma única linha a frase apropriada. Observe nos exemplos acima que a saída
deve conter apenas uma casa decimal. Os valores “X” que aparecem nos formatos são substituídos por
dígitos que formam o valor de saída. Depois desses valores o programa deve imprimir o caractere de
quebra de linha: ‘\n’.
Observações
Para que os três valores: A, B e C formem um triângulo as três condições abaixo devem ser satisfeitas:
• |b − c| < a < b + c;
• |a − c| < b < a + c;
• |a − b| < c < a + b;
A área de um trapézio é computada como Área= (A+B)∗C
2 .
Para imprimir um valor float com apenas uma casa decimal você deve usar a função printf com o código
de formato "%.1f"*/

float a,b,c,perimetro,area;

scanf("%f %f %f", &a, &b, &c);

    if (abs(b - c) < a && a < (b + c) &&
        abs(a - c) < b && b < (a + c) &&
        abs(a - b) < c && c < (a + b)) {
            perimetro=a+b+c;
            printf("Perimetro = %.1f", perimetro);
    } else {
            area=((a+b)*c)/2;
            printf("Area = %.1f", area);
    }

    return 0;
}


