#include <stdio.h>

int main(){

    float salario, aumento, salarioFinal;

    printf("Digite seu salário atual em R$ para calcular seu salário final: \n");
    scanf("%f", &salario);

    if (salario > 0 && salario < 300){
        aumento = 0.45;
    }else if (salario <= 600){
        aumento = 0.25;
    }else{
        aumento = 0.15;
    }

    salarioFinal = salario + (salario * aumento);

    printf("Seu salário final é de %.2f", salarioFinal);

    return 0;
}