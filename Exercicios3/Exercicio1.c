#include <stdio.h>

int main(){

    float num1, num2, num3, media;
    int i;

    for(i = 1; i <= 3; i++){
        printf("Digite o número %d: ", i);
        if(i == 1){
            scanf("%f", &num1);
        }else if (i == 2){
            scanf("%f", &num2);
        }else{
            scanf("%f", &num3);
        }
    }

    media = (num1 + num2 + num3) / 3;

    if (num1 > media || num2 > media || num3 > media){
        printf("Um dos três números é maior que a media\n");
    }else{
        printf("Nenhum número é maior que a média\n");
    }

    return 0;
}