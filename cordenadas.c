#include <stdio.h>

int main(){
    float num1, num2;
    
    scanf("%f %f", &num1, &num2);

    if (num1 > 0 && num2 > 0){
        printf("Q1\n");
    }

    else if (num1 < 0 && num2 > 0){
        printf("Q2\n");
    }

    else if (num1 < 0 && num2 < 0){
        printf("Q3\n");
    }

    else if (num1 > 0 && num2 < 0){
        printf("Q4\n");
    }

    else if (num1 == 0 && num2 == 0){
        printf("Origem\n");
    }
}