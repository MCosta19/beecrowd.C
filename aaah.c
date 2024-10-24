#include <stdio.h>

int main(){
    char entr1[1000], entr2[1000];
    int cont1 = 0, cont2 = 0, i = 0;

    scanf("%s", &entr1);
    scanf("%s", &entr2);

    //Contar o tamanho da string da primeira entrada
    while(entr1[i]){
        cont1++;
        i++;
    }

    i = 0;
    
    //Contar o tamanho da string da segunda entrada
    while(entr2[i]){
        cont2++;
        i++;
    }

    //Compara o tamanho das duas strings
    if (cont1-1 < cont2-1){
        printf("no\n");
    }

    else {
        printf("go\n");
    }

    return 0;
}