#include <stdio.h>

int main()
{
/*
Escrever um algoritmo que lê o público total de futebol, as percentagens de pessoas nas seguintes
categorias: popular, geral, arquibancada e cadeiras e forneça a renda total do jogo. Sabe-se que o valor
dos ingressos por categoria são dados pela tabela abaixo:
Categoria Valor ingresso
Popular R$ 1,00
Geral R$ 5,00
Arquibancada R$10,00
Cadeiras R$ 20,00
Entrada
A entrada contém uma linha inicial com um valor inteiro informando o número de casos de testes que
ocorrem nas linhas seguintes. Cada caso de teste seguinte é formado por uma linha contendo os seguintes
valores, separados entre si por um espaço:
• O número de pessoas que compraram ingresso para o jogo correspondente ao caso de teste.
• A percentagem de pessoas que compraram ingresso na categoria Popular.
• A percentagem de pessoas que compraram ingresso na categoria Geral.
• A percentagem de pessoas que compraram ingresso na categoria Arquibancada.
• A percentagem de pessoas que compraram ingresso na categoria Cadeiras.
Saída
O programa deve gerar uma linha para cada caso de teste na entrada, contendo a frase: A RENDA DO
JOGO N. x E = y, onde x corresponde a ordem do caso de teste na entrada e y é um valor real com duas
casas decimais que corresponde ao valor da renda total do jogo x*/

int contador, casostestes;
float numingressos,percpopular,percgeral,percarquibancada,perccadeiras;
float percpopular2,percgeral2,percarquibancada2,perccadeiras2;
float valorFinal;

scanf("%i" , &casostestes);

    for (contador=1 ; contador <= casostestes ; contador++){
    
    scanf("%f %f %f %f %f" , &numingressos, &percpopular, &percgeral, &percarquibancada, &perccadeiras);
        
        percpopular2=((numingressos/100)*percpopular)*1.00;
        percgeral2=((numingressos/100)*percgeral)*5.00;
        percarquibancada2=((numingressos/100)*percarquibancada)*10.00;
        perccadeiras2=((numingressos/100)*perccadeiras)*20.00;
        
        valorFinal = percpopular2+percgeral2+percarquibancada2+perccadeiras2;
        
        printf ("A RENDA DO JOGO N.%d E = %2.f. \n" , contador , valorFinal);
    
}

 return 0;
}
    
    