#include <stdio.h>

int main(){
    float n1, n2, n3, n4;
    float nota;
    
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    float media = ((n1*2) + (n2*3) + (n3*4) + (n4*1))/10;
    
    if (media < 5.0){
        printf("Media: %.1f\n", media);
        
        printf("Aluno reprovado.\n");
    }
    else if (media >= 5.0 && media <= 6.9){
        scanf("%f", &nota);
        
        float media2 = (media+nota)/2;
        
        printf("Media: %.1f\n", media);
        
        printf("Aluno em exame.\n");
        
        printf("Nota do exame: %.1f\n", nota);
        
        if (media2 >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media2);
        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media2);
        }
    }
    else if (media > 6.9){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }
}