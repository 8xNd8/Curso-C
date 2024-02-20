#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (){

    srand(time(NULL));

    int maximo =6 ;
    int minimo = 1;

    //dados 1/6
    int dado1 = (rand() % (maximo - minimo + 1)) + minimo;

    int dado2 = (rand() % (maximo - minimo + 1)) + minimo;

    int dado3 = (rand() % (maximo - minimo + 1)) + minimo;

    //resultado 
    int resultado= dado1 + dado2 + dado3;

    //Numeros gerados
    printf ("Valores :%d %d %d \n", dado1,dado2,dado3);
    printf ("Numero gerado: %d" , resultado );
    

    return 0;



}