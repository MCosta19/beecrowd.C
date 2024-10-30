#include <stdio.h>
#include <string.h>

int main(){
    
    int lop, vtm, i = 0, qnt, total = 0, dif;
    char fruit[20];

    while (1) {
        scanf("%d", &lop);
        if (lop == 0) {
            break;
        }

        scanf("%d %s", &qnt, fruit);

        if (strcmp(fruit, "suco de laranja") == 0) {
            vtm = qnt * 120;
                    
            total = total + vtm;
        }
        else if (strcmp(fruit, "morango fresco") == 0 || strcmp(fruit, "mamao") == 0) {
            vtm = qnt * 85;

            total = total + vtm;
        }
        else if (strcmp(fruit, "goiaba vermelha") == 0) {
            vtm = qnt * 70;

            total = total + vtm;
        }
        else if (strcmp(fruit, "manga") == 0) {
            vtm = qnt * 56;

            total = total + vtm;
        }
        else if (strcmp(fruit, "laranja") == 0) {
            vtm = qnt * 50;

            total = total + vtm;
        }
        else if (strcmp(fruit, "brocolis") == 0) {
            vtm = qnt * 34;

            total = total + vtm;
        }

        if (total < 110) {
            dif = 110 - total;

            printf("Mais %d mg", dif);
        }
        else if (total >= 110 && total <= 130) {
            printf("%d mg", total);

        }
        else if (total > 130) {
            dif = total - 130;

            printf("Menos %d mg", dif);
        }

        i++;
   }

    return 0;
}
