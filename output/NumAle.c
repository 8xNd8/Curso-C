//Gerando Númros aleatorios
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (){
    //usa o tempo atual como semente
    srand(time(NULL));

    //Cria um numero aleatorio de 0 a 9;
    int r= rand() % 100;

    //Imprime o mnumero gerado 
    printf ("Numero gerado : %d", r);

    return 0;



}