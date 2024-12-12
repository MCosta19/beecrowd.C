// int max(int x1, int x2) {
//     if (x1 > x2) {
//         return x1;
//     } else {
//         return x2;
//     }
// }

// int main() {
//     int num1, num2;
    
//     printf("Digite os dois numeros a serem comparados:");
//     scanf("%d %d", &num1, &num2);
    
//     int resultado = max(num1,num2);

//     printf("O maior valor eh: %d\n", resultado);

//     return 0;
// }

// int primo (int x1) {
//     if (x1 <= 1) {
//         return 0;
//     } else if (x1 == 2) {
//         return 1;
//     } else if (x1 % 2 == 0) {
//         return 0;
//     } else {
//         for (int i = 3; i <= x1 / 2; i += 2) {
//             if (x1 % i == 0) {
//                 return 0;
//                 break;
//             }
//         }
//     }
// }

// int main() {
//     int num1, resultado;

//     printf("Digite o numero para verificarmos se eh primo:");
//     scanf("%d", &num1);

//     resultado = primo(num1);

//     if (resultado) {
//         printf("%d Eh primo\n", num1);
//     } else {
//         printf("%d nao eh primo\n", num1);
//     }

//     return 0;
// }

// int soma_array (int Arr[], int tam_A, int num) {
//     int somatoria = 0;
    
//     for (int i = 0; i < tam_A; i++) {
//         somatoria += Arr[i] * num;
//     }

//     return somatoria;
// }

// int main() {
//     int tam, N, resultado;

//     printf("Digite o tamanho do array: ");
//     scanf("%d", &tam);

//     int A[tam];

//     for (int i = 0; i < tam; i++) {
//         printf("Digite os elementos do array: ");
//         scanf("%d", &A[i]);
//     }

//     printf("Digite o numero a ser multiplicado cada elemento: ");
//     scanf("%d", &N);

//     resultado = soma_array(A, tam, N);

//     printf("O resultados da somatoria dos elementos eh: %d\n", resultado);

//     return 0;
// }

// void reset (int *pi) {
//     *pi = 0;

// }

// int main(){
//     int p;

//     printf("Digite o valor de p: ");
//     scanf("%d", &p);

//     reset(&p);

//     printf("Novo valor de p: %d", p);

//     return 0;
// }

// #include <stdio.h>

// void swap_str(char *str1, char *str2) {
//     int i = 0;
//     while (str1[i] != '\0') i++;
//     int str1_length = i;

//     i = 0;
//     while (str2[i] != '\0') i++;
//     int str2_length = i;

//     if (str1_length != str2_length) {
//         printf("Erro: As strings têm tamanhos diferentes.\n");
//         return;
//     }

//     for (i = 0; i < str1_length; i++) {
//         char temp = str1[i];
//         str1[i] = str2[i];
//         str2[i] = temp;
//     }
// }

// int main() {
//     char str1[] = "abc";
//     char str2[] = "xyz";

//     printf("Antes do swap:\n");
//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2);

//     swap_str(str1, str2);

//     printf("\nDepois do swap:\n");
//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2);

//     return 0;
// }

// #include <stdio.h>

// void str_cpy(char *dest, const char *src) {
//     while (*src != '\0') {
//         *dest = *src;  
//         dest++;        
//         src++;         
//     }
//     *dest = '\0';  
// }

// int main() {
//     char str1[100] = "Hello, world!";
//     char str2[] = "New content";

//     printf("Antes da cópia:\n");
//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2);

//     str_cpy(str1, str2);

//     printf("\nDepois da cópia:\n");
//     printf("str1: %s\n", str1);

//     return 0;
// }

#include <stdio.h>

int sum_array(const int *arr, int size) {
    
    if (size == 0) {
        return 0;
    }
    
    return arr[0] + sum_array(arr + 1, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sum_array(arr, size);

    printf("A soma dos elementos do array é: %d\n", result);

    return 0;
}

