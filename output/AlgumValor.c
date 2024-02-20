#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (){
    //usa o tempo atual como semente
    srand(time(NULL));

    //Cria um numero aleatorio entre 5 e 14;
    int r= (rand() % 10) + 5;

    //Imprime o mnumero gerado 
    printf ("Numero gerado : %d", r);

    return 0;



}