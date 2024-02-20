#include <stdio.h>

#include <stdlib.h>

int main() {
    int a, b ,c;

    scanf ("%d" "%d" "%d", &a, &b, &c);
    //Analisa se está entre 0 e 10 
    if(a> 0 && b > 10 && c >10 ){
        printf("Todos são maiores que 10");
    }else {
        printf("Um dos valores nao e maior que 10");
    }

    return 0;
}
     