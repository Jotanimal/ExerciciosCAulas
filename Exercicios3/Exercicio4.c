#include <stdio.h>

int main(){
    
    int codigo;

    printf("Digite o código do produto que você deseja: \n");
    scanf("%d", &codigo);

    if (codigo == 1){
        printf("Pizza");
    }else if (codigo == 2){
        printf("Hamburger");
    }else if (codigo == 3){
        printf("Refrigerante");
    }else if (codigo == 4){
        printf("Batata Frita");
    }else{
        printf("Produto inválido!");
    }
    
    return 0;
}