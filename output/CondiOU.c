#include <stdio.h>

#include <stdlib.h>

int main() {
    int a, b ;

    scanf ("%d", &a);
    scanf ("%d", &b);
    //Analisa se está maior que 10 
    if(a> 10 || b > 10 ){
        printf(" Algum valor maior que 10");
    }else{
        printf("Nenhum e maior que 10");
    }
    return 0;
}