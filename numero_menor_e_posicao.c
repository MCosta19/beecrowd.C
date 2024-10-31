#include <stdio.h>

int main() {
    int tot, i, menor = 1001, posicao = 0;

    scanf("%d", &tot);
    
    int lista[tot];

    for (i = 0; i < tot; i++) {
        scanf("%d", &lista[i]);

    }

    for (i = 0; i < tot; i++) {
        if (lista [i] < menor) {
            menor = lista[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

}