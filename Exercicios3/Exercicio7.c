#include <stdio.h>
#include <string.h>

int main(){

    float preco, aumento, novoPreco;
    char classificacao[20];

    printf("Digite o preço do produto para saber seu valor após o aumento e sua classificação: \n");
    scanf("%f", &preco);

    if (preco > 0 && preco < 50){
        aumento = 0.05;
    }else if (preco <= 100){
        aumento = 0.10;
    }else{
        aumento = 0.15;
    }

    novoPreco = preco + (preco * aumento);

    // condicional para as classificações:

    if (novoPreco <= 80){
        strcpy(classificacao, "Barato");
    }else if (novoPreco <= 120){
        strcpy(classificacao, "Normal");
    }else if (novoPreco <= 200){
        strcpy(classificacao, "Caro");
    }else{
        strcpy(classificacao, "Muito caro");
    }

    printf("O novo preço do produto é de %.2f e é considerado %s", novoPreco, classificacao);

    return 0;
}