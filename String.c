#include <stdio.h>
#include <stdlib.h>

int main () {
    //Definindo Strings de Várias formas
    char palavra1[] = "boi";
    char palavra2[5] = "bala";
    char palavra3[] = {'a','b','c','d', '\0'};
    char palavra4[5] = {'f','o','n','e','\0'};

    //imprimindo String (sem espaços)
    printf("%s \n", palavra1);

    //Lendo uma string (sem espaço)
    printf("Digite uma palavra com ate 4 letras");
    fflush(stdin);
    scanf("%s", palavra2);

    //Lendo uma string (com espaços)
    char fruta[255];
    fflush(stdin);
    printf("Digite o nome de uma fruta:");
    fgets(fruta, sizeof(fruta), stdin);

    //imprimindo a  fruta lida
    printf("Fruta lida:");
    puts(fruta);

    return 0;
}