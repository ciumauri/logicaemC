#include <stdio.h>

int main()
{
    double A, B , MEDIA;

    printf("Digite a nota1: ");
    scanf("%lf", &A);
    printf("Digite a nota2: ");
    scanf("%lf", &B);

    MEDIA = (A * 3.5 + B * 7.5)/11;

    printf("MEDIA = %.5f\n", MEDIA);

    return 0;
}
