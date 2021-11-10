#include <stdio.h>

int main(){
  int anterior = 10, atual = 5, resto = atual % anterior;
  while (resto != 0)
  {
    resto = anterior % atual;
    anterior = atual;
    atual = resto;
  }
  printf("%d\n", anterior);
  return 0;
}
