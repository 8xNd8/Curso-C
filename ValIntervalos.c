#include <stdio.h>
#include <stdlib.h>

int i ;
int tabuada ;

int main () {
    
    int i, valorInicial, valorFinal, passos;

    //Lê valores 
    printf("Digite um valor inicial : ");
    scanf("%d", &valorInicial);

    printf("Digite um valor final :");
    scanf("%d", &valorFinal);

    printf("Digite um valor de passos :");
    scanf("%d", &passos);


    //Passa todos os parametros para a for
    for (i= valorInicial; i <= valorFinal; i = i + passos ){

        //imprime o valor de i de acordo com os parametros
        printf("%d\n", i);
       
    }
    


    return 0;
}


