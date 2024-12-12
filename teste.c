#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str_num[10];
    int p = 0;
   
    printf("Digite apenas numeros: ");
    if (fgets(str_num, sizeof(str_num), stdin) == NULL) {
        printf("Erro ao ler a entrada.\n");
        return 1;
    }
    
    // Remover o caractere de nova linha, se presente
    str_num[strcspn(str_num, "\n")] = '\0';

    // Verificando se a entrada contém apenas números
    while (str_num[p]) {
        if (!isdigit((unsigned char)str_num[p])) {
            printf("Eu disse apenas numeros!\n");
            return 1;
        }
        p++;
    }
    
    printf("%d\n", atoi(str_num));
    return 0;
}
