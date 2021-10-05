#include <stdio.h>

void main()
{

  double valor, res;
  scanf("%lf", &valor);
  if (valor >= 0 && valor <= 2000.00)
    printf("Isento\n");
  else
  {
    if (valor > 2000.00 && valor <= 3000.00)
      res = (valor - 2000.00) * 0.08;
    else if (valor >= 3000.01 && valor <= 4500.00)
      res = (valor - 3000.00) * 0.18 + (1000.00) * 0.08;
    else if (valor > 4500.00)
      res = (valor - 4500.00) * 0.28 + (1500.00) * 0.18 + (1000.00) * 0.08;

    printf("R$ %.2lf\n", res);
  }
  return 0;
}
