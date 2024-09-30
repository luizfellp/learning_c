#include <stdio.h>
#include <math.h>

int main ()
{
    /* Escrever um algoritmo que leia a massa (em toneladas) de um avião, sua aceleração (m/s2) e o tempo (s)
que levou do repouso até a decolagem. O programa deve calcular e escrever a velocidade atingida (Km/h),
o comprimento da pista (m) e o trabalho mecânico realizado (J) no momento da decolagem.
Dicas
• v = velocidade; a = aceleração; t =
tempo;
• m = massa;
• s = espaço percorrido;
• W = trabalho mecânico realizado;
• Um double deve ser lido com "%lf"
• 1 m/s = 3,6 Km/ h;
• v = a ∗ t;
• s = at2
2 ;
• W = mv2
2 ;
• A massa utilizada no trabalho é em
Kg
Entrada
O programa deve ler três linhas de entrada. A primeira linha contém um valor do tipo double represen-
tando a massa do avião em toneladas. A segunda linha, contém um valor do tipo double correspondente
à aceleração de avião. A terceira, linha contém um valor do tipo double correspondente ao tempo em
segundos gasto na decolagem.
Saída
O programa deve imprimir três linhas. A primeira, contém a frase: VELOCIDADE = x, onde x é o
valor da velocidade do avião em Km/h. A segunda, contém a frase: ESPACO PERCORRIDO = y, onde
y corresponde ao espaço em metros percorrido pelo avião durante a decolagem. A terceira linha contém a
frase: TRABALHO REALIZADO = z, onde z corresponde ao valor do trabalho em Joules, realizado pelo
avião durante a decolagem. Os valores de x, y e z devem ser do tipo double e devem conter duas casas
decimais e após esses valores deve vir o caractere de quebra de linha \n.*/

double massa,aceleração,tempo,velocidade,comprimentopista,trabalhomecânico1,trabalhomecânico2;

printf ("Informe a massa do avião (em ton):");
scanf ("%lf" , &massa);

printf ("Informe a aceleração do avião:");
scanf ("%lf" , &aceleração);

printf ("Informe a tempo do percurso do avião (em segundos):");
scanf ("%lf" , &tempo);

velocidade= (aceleração*3.60)*tempo;
comprimentopista= (aceleração*pow(tempo,2))/2;
trabalhomecânico1= (massa*pow(velocidade/3.60*100,2)/10/2);
trabalhomecânico2=trabalhomecânico1*

printf ("VELOCIDADE = %.2lf \n" , velocidade);
printf ("ESPACO PERCORRIDO = %.2lf \n" , comprimentopista);
printf ("TRABALHO REALIZADO = %.2lf \n" , trabalhomecânico1);

    return 0;
}