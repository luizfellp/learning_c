#include <stdio.h>

int main()
{
    int A;
    int B;
    float media;
    float mediafinal;
    
    printf ("informe o valor A:");
    scanf ("%i" , &A);
    
    printf ("informe o valor B:");
    scanf ("%i" , &B);
    
    media = (A+B);
    mediafinal = media/2;
    
    printf ("Média dos 2 números informados: %.3f" , mediafinal);
    
    
    return 0;
}