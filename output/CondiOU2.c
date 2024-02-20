#include <stdio.h>

#include <stdlib.h>

int main() {
    int a, b ;

    scanf ("%d", &a);
    scanf ("%d", &b);
    //Analisa se o numero e par 
    if(a % 2 == 0 || b % 2 == 0 )/*((a % 2 == 0) ||(b % 2 == 0 )) - Com parenteses*/{
        printf("Ao menos um numero e par");
    }else{
        printf("Nenhum e número e par");
    }
    return 0;
}