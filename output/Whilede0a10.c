#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int i = 0;

    while (i <= 10)
    {
       //imprime i e pula uma linha
       printf("%d \n", i );

       //Aumenta em 1 o valor do i atual
       i = i +1;

       /*Quando chega aqui, o codigo volta para a linha 8 e verifica a condiçao i <= 10 continua verdadeira, para executar o laço novamente e sair*/
    }
    return 0;
    


}