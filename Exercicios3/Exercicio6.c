#include <stdio.h>

int main(){

    int num1, num2, codigo, maiorNumero, menorNumero, i;

    for (i = 1; i < 3; i++){
        printf("Digite o número %d\n", i);
        if (i == 1){
            scanf("%d", &num1);
        }else{
            scanf("%d", &num2);
        }
    }
    // definindo o maior número:

    if (num1 > num2){
        maiorNumero = num1;
        menorNumero = num2;
    }else{
        maiorNumero = num2;
        menorNumero = num1;
    }

    printf("Agora, digite o código da operação: \n");
    scanf("%d", &codigo);
    
    switch (codigo){
        case 1:
            printf("O maior número é %d", maiorNumero);
            break;
        case 2:
            printf("O maior número é %d", maiorNumero);
            break;
        case 3:
            printf("O menor número é %d", menorNumero);
            break;
        case 4:
            printf("O menor número é %d", menorNumero);
            break;
        default:
            printf("Erro de código!");
    }   

    return 0;
}