#include <stdio.h>

int main()
{
    int A, B, C, D, DIFERENCA;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    printf("Digite o valor de D: ");
    scanf("%d", &D);

    DIFERENCA = (A * B - C * D);

    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}
