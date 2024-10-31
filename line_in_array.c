#include <stdio.h>

int main() {
    int L, i, j;
    float matriz[12][12], soma = 0.0, media = 0.0;
    char T;

    // Lê o número da linha e o tipo de operação
    scanf("%d", &L);
    scanf(" %c", &T);  // Observe o espaço antes de %c para ignorar o newline

    // Lê a matriz 12x12
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    // Calcula a soma dos elementos na linha especificada
    for (j = 0; j < 12; j++) {
        soma += matriz[L][j];
    }

    // Realiza a operação com base no tipo especificado
    if (T == 'S') {
        printf("%.1f\n", soma);  // Soma
    } else if (T == 'M') {
        media = soma / 12.0;      // Média
        printf("%.1f\n", media);
    }

    return 0;
}