#include <stdio.h>
#include <stdlib.h>

int exemploGlobal = 20;

//Função void (Não retorna nada no fim)
void imprimeA(){
    int a = 10;
    printf("Valor de A na funcao: %d\n", a);
    exemploGlobal= 50;
}

int main(){
    //Defino um valor de a no escopo main
    int a = 15;
    printf("Valor de A dora da funcao: %d\n",a);
    printf("Valor do Exemplo Global: %d\n", exemploGlobal);

    //Imprimo a variavel A da Função imprimeA()
    imprimeA();

    //Imprime a variavel A da função main()
    printf("Valor de A fora da funcao: %d\n",a);
    printf("Valor do Exemplo Global NOVO: %d\n", exemploGlobal);

    return 0;
}