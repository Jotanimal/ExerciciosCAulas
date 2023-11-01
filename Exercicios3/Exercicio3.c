#include <stdio.h>

int main(){

    int codigo;

    printf("Digite o código de origem do produto: ");
    scanf("%d", &codigo);

    if (codigo == 1 || codigo == 2){
        printf("Procedência do produto: Sul");
    }else if (codigo == 3 || codigo == 4){
        printf("Procedência do produto: Sudeste");
    }else if (codigo == 5 || codigo == 6){
        printf("Procedência do produto: Norte");
    }else if (codigo == 7 || codigo == 8){
        printf("Procedência do produto: Nordeste");
    }else if (codigo == 9 || codigo == 10){
        printf("Procedência do produto: Centro-Oeste");
    }else{
        printf("Código inexistente!");
    }

    return 0;
}