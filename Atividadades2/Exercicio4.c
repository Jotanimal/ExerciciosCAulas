#include <stdio.h>

int main(){

    int anoAtual, anoNascimento, idade;

    printf("Para saber se você já pode votar, digite seu ano de nascimento: \n");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: \n");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;

    // criação de uma condicional if - else para definir o que imprimir baseado na idade final do usuário
    if(idade >= 16){
        printf("Você tem %d anos e poderá votar esse ano!", idade);
    }else{
        printf("Você é menor de 16 anos e não poderá votar esse ano!");
    }
    
    return 0;
}