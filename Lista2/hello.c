#include <stdio.h>

int main(int argc, char const *argv[])
{
    float raio, area;

    printf("Programa para calcular a area do circulo\n");
    printf("Digite o valor do raio: ")
        scanf("%f", raio);

    area = 3.14 * (raio * raio);

    printf("Area é igual a:" area);

    return 0;
}
