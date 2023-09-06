#include <stdio.h>

int main(){

    char aluno[30];
    float valor1;
    float valor2;
    float valor3;

    //recebe nome do aluno

    printf("Digite seu nome: ");
    scanf("%s", &aluno);

    //imprime nome do aluno e pede para inserir os valores das notas

    printf("Olá, %s! Digite suas três notas para receber o valor total de sua média: ", aluno);
    scanf("%f", &valor1);
    scanf("%f", &valor2);
    scanf("%f", &valor3);

    //cálculo da média

    float mediaTotal = (valor1 + valor2 + valor3) / 3;

    printf("%s, sua média final é de %.2f pontos", aluno, mediaTotal);

    return 0;
}