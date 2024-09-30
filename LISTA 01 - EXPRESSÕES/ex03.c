#include <stdio.h>

int main ()
{
  /* Um fabricante de latas deseja desenvolver um programa para calcular o custo de uma lata cilíndrica de
alumínio, sabendo-se que o custo do alumínio por m2 é R$ 100,00.
Entrada
O programa deve ler dois valores na entrada: o raio e a altura da lata. Ambos os valores correspondem
a valores em metros. Cada valor ocorre em uma linha diferente na entrada.
Saída
O programa deve imprimir a frase: O VALOR DO CUSTO E = XXX.XX, onde XXX.XX é o valor do
custo da lata. Logo após o valor do custo da lata o programa deve imprimir o caractere de quebra de linha
‘\n’*/
    
	float raio;
	float altura;
	float pi = 3.14159;
    
	printf ("Informe o raio da lata (Em Metros):");
	scanf ("%f" , &raio);
    
	printf ("Informe a altura da lata (Em Metros):");
	scanf ("%f" , &altura);
    
	float areac;
	float arear;
	float areat;
	float m2=100.00;
	float valorfinal;
    
	areac = pi*(raio*raio);
	arear = 2*pi*raio*altura;
	areat = (areac*2)+arear;
	
	valorfinal = areat*m2;
    
 	printf ("O VALOR DO CUSTO É = %.2f" , valorfinal);
    
	return 0;
}
