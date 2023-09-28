#include <stdio.h>

int main(){

    int valor1, valor2, troca;
    
    valor1 = 10;
    valor2 = 20;

    troca = valor1; // Cria-se a váriavel "troca" para poder trocar os valores de A e B
    valor1 = valor2;
    valor2 = troca;

    printf("Valor 1 = %d\n", valor1);
    printf("Valor 2 = %d\n", valor2);

    return 0;
}