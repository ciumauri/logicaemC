#include <stdio.h>

int main()
{
    int a, b, resultado;

    printf("Programa para calculos basicos\n");
    printf("Digite dois numeros: ");
    scanf("%d %d, &a, &b");
    printf("\nResultado\n");
    resultado = a + b;
    printf("Soma = %f\n", resultado);
    resultado = a - b;
    printf("Subtração = %f\n", resultado);
    resultado = a * b;
    printf("Multiplicação = %f\n", resultado);
    resultado = a / b;
    printf("Divisão = %f\n", resultado);

    return 0;
}