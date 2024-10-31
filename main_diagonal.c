#include <stdio.h>

int main() {
    int i, j, count = 0;
    float matriz[12][12], soma = 0.0;
    char op;

    scanf("%c", &op);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    for (i = 0; i < 12; i++) {
        for (j = i + 1; j < 12; j++) {
            soma += matriz[i][j];
            count++;
        }
    }

    if (op == 'S') {
        printf("%.1f\n", soma);
    } else if (op == 'M') {
        printf("%.1f\n", soma / count);
    }
}