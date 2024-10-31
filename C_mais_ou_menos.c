#include <stdio.h>
#include <string.h>

int main(){
    
    int lop, vtm, i, qnt, total, dif;
    char fruit[20];

    while (1) {
        total = 0;

        i = 0;

        scanf("%d", &lop);
        
        if (lop == 0) {
            break;
        }

        while (i < lop){    
            scanf("%d %[^\n]", &qnt, fruit);

            if (strcmp(fruit, "suco de laranja") == 0) {
                vtm = qnt * 120;
                    
                total += vtm;
            }
            else if (strcmp(fruit, "morango fresco") == 0 || strcmp(fruit, "mamao") == 0) {
                vtm = qnt * 85;

                total += vtm;
            }
            else if (strcmp(fruit, "goiaba vermelha") == 0) {
                vtm = qnt * 70;

                total += vtm;
            }
            else if (strcmp(fruit, "manga") == 0) {
                vtm = qnt * 56;

                total += vtm;
            }
            else if (strcmp(fruit, "laranja") == 0) {
                vtm = qnt * 50;

                total += vtm;
            }
            else if (strcmp(fruit, "brocolis") == 0) {
                vtm = qnt * 34;

                total += vtm;
            }

            i++;
        }

        if (total < 110) {
            dif = 110 - total;

            printf("Mais %d mg\n", dif);
        }
        else if (total >= 110 && total <= 130) {
            printf("%d mg\n", total);

        }
        else if (total > 130) {
            dif = total - 130;

            printf("Menos %d mg\n", dif);
        }

   }
    return 0;
}