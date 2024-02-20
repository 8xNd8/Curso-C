#include <stdlib.h>
#include <string.h>
#include <stdio.h>


struct Pessoa{              //definiçao do "molde" para pessoas
    int idade;              //Atributo de idade
    float salario;          //Atributo de salario
    char nome[255];         //Atributo de nome
};

int main (){
    Pessoa pessoas[2];

    pessoas[0].idade = 25;
    pessoas[0].salario = 500.0;
    strcpy(pessoas[0].nome,"john");

    pessoas[1].idade = 30;
    pessoas[1].salario = 800.0;
    strcpy(pessoas[1].nome, "Billy");

    int i;
    //Imprime a lista de pessoas
    for (i=0; i < 2; i++){

        printf("Nome: %s, ", pessoas[i].nome);
        printf("%d anos,", pessoas[i].idade);
        printf("salario R$%.2f \n",pessoas[i].salario);
    }

    return 0;
}

