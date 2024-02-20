#include <stdio.h>
#include <stdlib.h>
int valor = 0;

void adicionaUmAte10(){
    //Se o valor for menor que 10 
    if(valor <10){
        //Imprime na tela
        printf("%d \n", valor);

        //Adiciona 1
        valor++;

        //chama a função de novo
        adicionaUmAte10();
    }
}

int main(){
    //Chama a função uma vez
    adicionaUmAte10();

    //Encerrou a recursão
    printf("Fim");
    return 0;
}