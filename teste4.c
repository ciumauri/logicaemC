#include <stdio.h>

int main(){
  int i;
  float temp;
  scanf("%d", i);
  while (i >= 0) {
    temp = (9 * i / 5) + 32;
    printf("%d graus Centrigadus equivalem a %.2f Graus Fahrenheit\n", i, temp);
    i -= 10;
  }

  return 0;
}
