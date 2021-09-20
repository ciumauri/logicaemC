#include <stdio.h>

int main()
{
    int NUMBER, HOURS; 
    double VALUEHOUR, SALARY;

    printf("Digite o numero do funcionario: ");
    scanf("%d", &NUMBER);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &HOURS);
    printf("Digite o valor a hora de trabalho: ");
    scanf("%lf", &VALUEHOUR);
    
    SALARY = (HOURS * VALUEHOUR);

    printf("NUMBER = %.d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);

    return 0;
}
