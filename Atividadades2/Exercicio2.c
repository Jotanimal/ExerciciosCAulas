#include <stdio.h> 

int main(){

    int numero, antecessor;

    printf("Digite um número para saber seu antecessor: \n");
    scanf("%d", &numero);
    
    antecessor = numero - 1;

    printf("O antecessor de %d é: %d", numero, antecessor);
    
    return 0;
}