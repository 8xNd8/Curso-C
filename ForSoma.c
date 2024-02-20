#include <stdio.h>
#include <stdlib.h>

int i ;
int soma = 0;

int main () {
    for (int i = 0; i < 10; i++)
    {
        //imprime i e pula uma linha 
        printf("i = %d(Soma: %d)\n", i, soma);

        //incrementa o valor de i na soma
        ///soma recebe -> o valor atual de soma +i
        soma= soma +i;
       
    }
    printf("Soma: %d", soma );

    return 0;
    
}