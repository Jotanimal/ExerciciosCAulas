#include <stdio.h>

int main(){

    // declaração de variáveis

    float salario;
    float aumento;

    printf("Para saber seu salário total após o aumento, digite seu salário atual: ");
    scanf("%f", &salario);

    // soma do salário + 25% de aumento

    aumento = salario * 1.25;

    printf("Seu novo salário é de: %.2f", aumento);

    return 0;
}