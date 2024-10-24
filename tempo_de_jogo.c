#include <stdio.h>

int main(){
    int prime, secon, total;

    scanf("%d %d", &prime, &secon);

    if (prime == secon){
        printf("O JOGO DUROU 24 HORA(S)\n");
    } 
    else if (prime > secon){
        total = (24-prime)+secon;
        printf("O JOGO DUROU %d HORA(S)\n", total);
    }
    else if (prime < secon){
        total = (secon-prime);
        printf("O JOGO DUROU %d HORA(S)\n", total);
    }
    return 0;
}