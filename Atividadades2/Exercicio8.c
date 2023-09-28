#include <stdio.h>

int main(){

    int num1, num2, num3, soma1e2;

    printf("Digite um número: \n");
    scanf("%d", &num1);

    printf("Digite outro número: \n");
    scanf("%d", &num2);

    printf("Digite o último número: \n");
    scanf("%d", &num3);

    soma1e2 = num1 + num2;

    if(soma1e2 > num3){
        printf("A soma dos dois primeiros números é maior que o terceiro número.");
    }else if(soma1e2 < num3){
        printf("A soma dos dois primeiros números é menor que o terceiro número.");
    }else{
        printf("A soma dos dois primeiros números é igual ao terceiro número.");
    }

    return 0;
}