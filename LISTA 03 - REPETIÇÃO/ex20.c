#include <stdio.h>

int main(){
    
/*Faça um algoritmo em linguagem C que apresente os pares de índices inferiores à diagonal principal de
uma matriz m × n. A diagonal principal corresponde aos elementos ai,i.
a1,1 a1,2 · · · a1,n
a2,1 a2,2 · · · a2,n
... ... . . . ...
am,1 am,2 · · · am,n (4)
Entrada
O programa deve ler as dimensões m e n da matriz, onde m é o número de linhas e n o número de
colunas.
Saída
O programa deve apresentar em cada linha os pares de índices de uma mesma linha. Os pares devem
ser apresentados entre parênteses e separados por um ífen*/
    
    int m,n;
    int matriz [m][n];
    int contadorm,contadorn;
    
    scanf("%i", &m);
    scanf("%i", &n);
    
    for(contadorm=2; contadorm <= m; contadorm++){
        
        for(contadorn=1; contadorn <= n; contadorn++){
            printf("(%i,%i)", contadorm, contadorn);
                if(contadorn<n){
                    printf(" - ");
                }
        }
            printf("\n");
    }
    
    
    
    
    
    return 0;
}