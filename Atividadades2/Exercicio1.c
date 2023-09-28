#include <stdio.h>

int main(){

    float numero, dobro;

    printf("Digite um número para saber seu dobro: \n");
    scanf("%f", &numero);

    dobro = numero * 2;

    printf("O dobro do número inserido é: %.2f", dobro);
    
    return 0;
}
