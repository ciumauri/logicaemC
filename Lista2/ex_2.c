#include <stdio.h>

int main()
{
    double raio, pi = 3.14159, A;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);
    

    A = (pi * (raio * raio));

    printf("A=%.4f\n", A);

    return 0;
}
