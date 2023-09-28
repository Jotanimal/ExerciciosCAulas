#include <stdio.h>

int main(){

    float custoMaca, custoTotal;
    int quantMaca;

    printf("Quantas maçãs você deseja comprar?\n");
    scanf("%d", &quantMaca);

    // criando uma condicional if else para definir os valores das maçãs baseados na quantidade
    if(quantMaca < 12){
        custoMaca = 1.30;
    }else{
        custoMaca = 1.00;
    }

    // cálculo do custo total
    custoTotal = quantMaca * custoMaca;

    printf("O custo total das maçãs compradas é de %.2f", custoTotal);
}