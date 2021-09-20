#include <stdio.h>

int main()
{
    double A, B, C, MEDIA;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    MEDIA = ((A*2.0) + (B*3.0) + (C*5.0))/10.0;

    printf("MEDIA = %.1f\n", MEDIA);

    return 0;
}
