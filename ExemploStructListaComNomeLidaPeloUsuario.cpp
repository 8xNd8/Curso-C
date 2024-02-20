#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{          //Dedinição do "molde" para Pessoas
    int idade;          //Atributo de idade
    float salario;      //Atributo de salario
    char nome[255];     //Atributo do nome
};

int main (){
    Pessoa pessoa1;                //cria um Struct do tipo Pessoa
  
   //lendo informações diretamente no struct
   printf("Digite a idade:");
   scanf("%d", &pessoa1.idade);

   printf("Digite o salario:");
   scanf("%f", &pessoa1.salario);

   printf("Digite o nome:");
   scanf("%s", &pessoa1.nome);

   //Imprimindo o resultado lido
   printf("Nome: %s\n", pessoa1.nome);
   printf("%d anos, salario R$%.2f", pessoa1.idade, pessoa1.salario);

   return 0;
}
