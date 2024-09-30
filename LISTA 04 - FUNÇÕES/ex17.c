#include <stdio.h>
#include <math.h>

/*Leia três valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo,
calcule o perímetro do triângulo e imprima a mensagem:
Perimetro = XX.X
Caso os valores não formem um triângulo, calcule a área do trapézio que tem A e B como base e C como
altura, mostrando a mensagem:
Area = XX.X
Escreva as seguintes funções para resolver o problema:
• Uma função E_Triangulo que receba como parâmetros três valores do tipo float correspondendo
aos três lados de um possível triângulo e que retorne um número inteiro contendo um dos possíveis
valores: 1 - se os três números formam um triângulo, ou 0 - se os três números não formam os lados
de um triângulo.
• Uma função Perimetro que recebe como parâmetros os valores de três lados de um triângulo e retorne
um valor float correspondente ao perímetro do triângulo correspondente.
• Uma função areaTrapezio que receba como parâmetros três valores float correspondendo, respecti-
vamente, à base inferior, à base superior e à altura de um trapézio e retorne um valor float correspon-
dendo à area do trapézio.
Seu programa deve ler três valores float, verificar se formam um triângulo através do uso da função
E_Triangulo. Se formarem triângulo, seu programa deve chamar a função Perimetro para computar o pe-
rímetro do triângulo formado pelos três valores e imprimir o perímetro. Se não formarem um triângulo, seu
programa deve chamar a função areaTrapezio e deve imprimir a área do trapézio formado pelos valores.
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
de formato "%.1f".*/


int E_Triangulo(float a, float b, float c) {
    return ( (b - c < a && a < b + c) && (a - c < b && b < a + c) && (a - b < c && c < a + b) ) ? 1 : 0;
}

float Perimetro(float a, float b, float c) {
    return a + b + c; 
}

float areaTrapezio(float A, float B, float C) { 
    return ( (A + B) * C ) / 2;
}

int main() {
    float A, B, C; 
    scanf("%f %f %f", &A, &B, &C);
    
    if (E_Triangulo(A, B, C)) {
        float perimetro = Perimetro(A, B, C); 
        printf("Perimetro = %.1f\n", perimetro);
    } else { 
        float area = areaTrapezio(A, B, C);
        printf("Area = %.1f\n", area);
    } 
    
    return 0;
}
