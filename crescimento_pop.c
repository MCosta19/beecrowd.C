#include <stdio.h>

int main(){
    int t, pa, pb, anos;
    double ga, gb;

    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
        anos = 0;

        while (pa <= pb && anos <= 100) {
            pa += (int)(pa * (ga / 100));
            pb += (int)(pb * (gb / 100));
            anos++;
        }

        if (anos > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", anos);
        }
    }

    return 0;
}