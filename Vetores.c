#include <stdio.h>
#include <stdlib.h>
#define TAM 2 // definindo um Constante 

int main(){

    //Definindo Vetores de Varias formas
    int vetorDeInt[] = {1.5,2.2,3.0};
    float vetorDeFloat [3] = {1.5,2.2,3.0};
    char vetorDeChar[TAM] = {'a', 'b'}; 

    //Modificando Valor por atribuição
    vetorDeInt[0] = 9;

    //modificando Valor em variavel 
    float novoValor = 5.0;
    vetorDeFloat[2] = novoValor;

    //Modificando valor com usuario
    printf("Digite um letra nova:");
    fflush(stdin);
    scanf("%c", &vetorDeChar[0]);

    //imprimindo vetores
    int i = 0;
    printf("\nVetor 1: \n");
    for(i = 0; i < 4 ; i++){
        printf("%d \n ", vetorDeInt[i]);
    }

    printf("\nVetor 2: \n");
    for(i = 0; i < 3 ; i++){
        printf("%f \n ", vetorDeFloat[i]);
    }

    printf("\nVetor 3: \n");
    for(i = 0; i < TAM ; i++){
        printf("%c \n ", vetorDeChar[i]);
    }

    //Lendo Valores para todo o vetor e 
    printf("\n Digite inteiros\n");
    for(i = 0; i < 4; i++){
        printf("Lendo em vetor [%d]:",i);
        scanf("%d", vetorDeInt[i]);
    }
    
    //Imprimindo este vetor atualizado
    for(i=0; i < 4; i++){
        printf("%d \n", vetorDeInt[i]);
    }

    return 0;

}