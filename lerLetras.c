#include <stdio.h>

#include <stdlib.h>

int main () {
	char a ;
	char b ;
	

	
    scanf ("%c", &a); //ler valor de a
    fflush(stdin); // limpa o buffer
    
    scanf ("%c", &b); //ler valor de b
    fflush(stdin);
    
    //resulatado na tela
    printf("resultado: %c %c", a, b);

	return 0;
}