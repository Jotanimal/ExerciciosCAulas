#include <stdio.h>

int main(){

    int idadeAtual;
    int idadeEm2025;

    printf("Olá, digite sua idade atual para saber quantos anos terá em 2025: ");
    scanf("%d", &idadeAtual);

    // cálculo da idade
    // o cálculo ficou extremamente simples. Poderia ser mais robusto, dependendo do mês e dia no qual a pessoa nasceu e sabendo o ano atual para ter resultados diferentes, porém ainda estou quebrando a cabeça pra deixar ele dessa forma.

    idadeEm2025 = idadeAtual + 2;

    printf("Você tem %d anos em 2023. Em 2025 você terá %d.", idadeAtual, idadeEm2025);
    return 0;
}