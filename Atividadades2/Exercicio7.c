#include <stdio.h>

int main(){

    float numero;

    printf("Digite um número: \n");
    scanf("%f", &numero);

    if(numero < 0){
        printf("Número negativo!");
    }else{
        printf("Número positivo!");
    }

    return 0;
}