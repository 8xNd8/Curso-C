#include <stdio.h>
#include <stdlib.h>

struct Pessoa{          //Definição do "molde" para Pessoas
    int idade;          //Atributo de idade
    float salario;      //Atributo de salário
};

int main(){
    Pessoa pessoa1;
    pessoa1.idade = 25;
    pessoa1.salario = 500.0;
    printf("%d anos, salario R$%.2f", pessoa1.idade,  pessoa1.salario);
    return 0;

}
