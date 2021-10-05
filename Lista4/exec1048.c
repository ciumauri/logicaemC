#include <stdio.h>
int main (){
    double s, ns;
    int i;
    scanf("%lf", &s);
    
    if (s >=0 && s <= 400.00) {
        ns = s * 1.15;
        i = 15;
    }
    if (s >= 400.01 && s <= 800.00) {
        ns = s * 1.12;
        i = 12;
    }
    if (s >= 800.01 && s <= 1200.00) {
        ns = s * 1.1;
        i = 10;
    }
    if (s >= 1200.01 && s <= 2000.00) {
        ns = s * 1.07;
        i = 7;
    }
    if (s > 2000.00) {
        ns = s * 1.04;
        i = 4;
    }
    printf("Novo salario: %.2lf\n", ns);
    printf("Reajuste ganho: %.2lf\n", ns-s);
    printf("Em percentual: %i %%\n", i);
    return 0;
}