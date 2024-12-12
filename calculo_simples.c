#include <stdio.h>

int main() {
    int pec, quant;
    double valor, preco;

    for (int i = 1; i <= 2; i++){
        scanf("%d %d %lf", &pec, &quant, &valor);

        preco += quant*valor;

    }
    printf("VALOR A PAGAR: R$ %.2f", preco);
}