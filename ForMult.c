#include <stdio.h>
#include <stdlib.h>

int i ;
int tabuada ;

int main () {

    //le valor especifico

    printf("Digite um numero: " );
    scanf("%d", &tabuada);

    for (int i = 1; i <= 10; i++)
    {
         
        printf("%d x %d = %d \n", tabuada, i, tabuada* i);

       
    }


    return 0;
    
}