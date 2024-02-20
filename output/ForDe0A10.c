#include <stdio.h>

#include <stdlib.h>

int main() {

    int i = 0;

    for (i = 10; i > 0; i = i - 3){
        
        //Imprime i e pula uma linha
        printf("%d \n ", i );

        /* quando chega aqui  o codigo volta para linha 8
        e verifica a condiçao a i > 0 continua verdadeira,
        para executtar o laço novamente ou sair 
        */


    }
    return 0;



}