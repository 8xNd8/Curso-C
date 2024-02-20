//multiplicaçao de numeros quebrados
#include <stdio.h>

#include <stdlib.h>

int main () {
	float a ;
	float b ;
	

	printf("digite o valor de a" );
    scanf ("%f", &a); //ler valor de a

    printf("digite o valor de b" );
    scanf ("%f", &b); //ler valor de b

    //Resultado da soma
    float resultado = a * b;
    
    //resulatado na tela
    printf("resultado: %.2f", resultado);

	return 0;
}