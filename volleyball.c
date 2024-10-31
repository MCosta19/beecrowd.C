# include <stdio.h>

int main() {
    int nump, i;
    float  s, b, a, sv, bv, av, ts = 0, tb = 0, ta = 0, sc = 0, bc = 0, ac = 0;
    char nome[10];

    scanf("%d", &nump);

    for (i = nump; i > 0; i--) {
        scanf("%s", nome);

        scanf("%f %f %f", &s, &b, &a);

        scanf("%f %f %f", &sv, &bv, &av);

        ts += s;

        tb += b;

        ta += a;

        sc = sc + sv;

        bc = bc + bv;

        ac = ac + av;

    }

    float ps = (sc / ts)*100;

    float pb = (bc / tb)*100;

    float pa = (ac / ta)*100;

    printf("Pontos de Saque: %.2f %%.\n", ps);
    printf("Pontos de Bloqueio: %.2f %%.\n", pb);
    printf("Pontos de Ataque: %.2f %%.\n", pa);

    return 0;
}