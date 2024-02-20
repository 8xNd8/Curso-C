#include <stdio.h>

#include <stdlib.h>

int main () {

    int a, b ,opcao, resultado;
    printf ("Digite 2 valores:");
    scanf("%d %d", &a ,&b );


    printf("Menu     \n");
    printf("1 - Somar    \n");
    printf("2 - Subitrair     \n");
    printf("Escolha uma opção:\n");

    //Le opçao escolhida
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        resultado= a+b; //Soma
        break;
    
    case 2:
       resultado= a-b;
        break;
        
    default:
        printf("opcao invalida!");
        break;
    }

    printf("Resultado: %d" , resultado);
    return 0;

}