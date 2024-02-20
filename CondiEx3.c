#include <stdio.h>

#include <stdlib.h>
/**/

int main (){
    int a;
	

	// Lê valores
    scanf ("%d", &a);// le o valor de A



    //O operador % trás como resultado
    // o REsto da divisão de um número
    //por outro numero
    if(a % 2 == 0) {
        printf ("Número par");

    }else{
        printf("Numero impar");
   
    }
	return 0;
}