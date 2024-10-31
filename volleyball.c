# include <stdio.h>

int main() {
    int nump, s, b, a, sv, bv, av, i;
    double ps, pb, pa, ts, tb, ta; 
    char nome[10];

    scanf("%d", &nump);

    for (i = nump; i > 0; i--) {
        scanf("%s", nome);

        scanf("%d %d %d", &s, &b, &a);

        scanf("%d %d %d", &sv, &bv, &av);

        ps = (s - sv)/100;

        pb = (b - bv)/100;

        pa = (a - av)/100;

        ts += ps;

        tb += pb;

        ta += pa;

    }

    printf("Pontos de Saque: %.2f %%.\n", ts);
    printf("Pontos de Bloqueio: %.2f %%.\n", tb);
    printf("Pontos de Ataque: %.2f %%.\n", ta);

    return 0;
}