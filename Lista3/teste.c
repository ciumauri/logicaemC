#include <stdio.h>

int main() {

float A,B,C;

printf("Informe os valores de A, B e C:\n");
scanf("%f %f %f",&A,&B,&C);

printf("TRIANGULO: %.3f\n",A*C/2);

printf("CIRCULO: %.3f\n",3.14159*C*C);

printf("TRAPEZIO: %.3f\n",(A+B)*C/2);

printf("QUADRADO: %.3f\n",B*B);

printf("RETANGULO: %.3f\n",A*B);

return 0;

}