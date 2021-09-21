#include <stdio.h>

int main()
{

  float R;

  printf("Informe os valores do Raio:\n");
  scanf("%f", &R);

  printf("VOLUME: %.3f\n", 4 / 3.0 * 3.14159 * (R * R * R));

  return 0;
}