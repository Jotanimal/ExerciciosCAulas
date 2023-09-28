#include <stdio.h>

int main(){

    int num1, num2;

    printf("Digite um número inteiro: \n");
    scanf("%d", &num1);

    printf("Digite outro número inteiro para saber qual o maior entre os dois: \n");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O maior número é %d", num1);
    }
    if(num1 = num2){
        printf("Os números possuem o mesmo valor");
    }
    else{
        printf("O maior número é %d", num2);
    }
    
    return 0;
}