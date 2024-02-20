#include <stdio.h>
#include <stdlib.h>

//Função void (Não retorna nada no fim)
void desenhaSeparador (){
    printf("\n------------------------\n");
}

int main(){

    //Chama a função e executa o quem neela
    desenhaSeparador();
    printf("Oi");
    desenhaSeparador();
    printf("Fim");
    desenhaSeparador();

    return 0;
}