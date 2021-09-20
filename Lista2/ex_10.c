#include <stdio.h>

int main()
{
    int distTotal;
    double combTotal , consMedio;

    printf("Digite a distancia percorrida: ");
    scanf("%d", &distTotal);
    printf("Digite o total de combustivel: ");
    scanf("%lf", &combTotal);

    consMedio = (distTotal / combTotal);

    printf("%.3f km/l\n", consMedio);

    return 0;
}
