#include <stdio.h>

int main(){

    float num1, num2, num3;
    int i;

    // loop de repetição para digitar os 3 números

    for (i = 1; i <= 3; i++){
        printf("Digite o número %d: ", i);
        if(i == 1){
            scanf("%f", &num1);
        }else if(i == 2){
            scanf("%f", &num2);
        }else{
            scanf("%f", &num3);
        }
    }

    if(num1 > num2 && num1 > num3){
        printf("O maior número é %.2f", num1);
    }else if(num2 > num1 && num2 > num3){
        printf("O maior número é %.2f", num2);
    }else{
        printf("O maior número é %.2f", num3);
    }

    return 0;
}