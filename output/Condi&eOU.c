#include <stdio.h>

#include <stdlib.h>

int main() {
    int a, b, soma;

    scanf ("%d", &a);
    scanf ("%d", &b);
    soma = a + b;
    
    if ((soma > 0 && soma < 10 ) ||(soma % 2 == 0 )){
        printf("Esta em 0 a 10 ou e par");

    return 0;
    }
}