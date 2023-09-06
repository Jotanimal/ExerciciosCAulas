#include <stdio.h>

int main(){

    int quantProduto;
    float precoProduto;
    float totalAPagar;

    printf("Digite a quantidade do produto que você deseja comprar: ");
    scanf("%d", &quantProduto);

    printf("Agora digite o valor do produto desejado: ");
    scanf("%f", &precoProduto);

    // formula do cálculo do total a ser pago
    
    totalAPagar = quantProduto * precoProduto;

    printf("Você deverá pagar %.2f", totalAPagar);
    
    return 0;
}