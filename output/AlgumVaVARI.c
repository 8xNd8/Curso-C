#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (){
    //usa o tempo atual como semente
    srand(time(NULL));

    //Cria um numero aleatorio entre 5 e 14;
    int maximo =14 ;
    int minimo = 11;

    //Traduzindo para a fórmula
    //       14  - 5 + 1 = 10
    int r = (rand() % (maximo - minimo + 1)) + minimo;

    //então teremos um numero de 0 a 9 + 5
    // ou seja, o mínimo será 5 e 0 máximo será 14

    //imprime o numero gerado
    printf ("Numero gerado: %d" , r );

    return 0;



}