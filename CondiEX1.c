#include <stdio.h>

#include <stdlib.h>
/*Programa para ler dois números inteiros e imprimir na tela*/

int main () {
    int a, b , soma;
	

	
    scanf ("%d", &a);// le o valor de A
    
    scanf ("%d", &b); // le o valor de B

    soma = a+b;

    //Comparações
    if(soma >= 10) {
        printf ("Soma maior ou igual a 10");

    }else {
        printf("Soma menor que 10");
    }
    
	return 0;
}