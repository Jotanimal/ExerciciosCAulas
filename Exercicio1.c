#include <stdio.h>

int main(){

    float baseTriangulo;
    float alturaTriangulo;

    printf("Para calcular a área, informe a base do triângulo: ");
    scanf("%f", &baseTriangulo);

    printf("Agora informe a altura: ");
    scanf("%f", &alturaTriangulo);

    float areaTriangulo = (baseTriangulo * alturaTriangulo) / 2;

    printf("A área do triângulo é igual a %.2f", areaTriangulo);

    return 0;
}