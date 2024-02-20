#include <stdio.h>

#include <stdlib.h>

int main () {
	int a ;
	int b ;
	

	printf("digite o valor de a" );
    scanf ("%d", &a); //ler valor de a

    printf("digite o valor de b" );
    scanf ("%d", &b); //ler valor de b

    //Resultado da soma
    int resultado = a+ b;
    
    //resulatado na tela
    printf("resultado: %d", resultado);

	return 0;
}