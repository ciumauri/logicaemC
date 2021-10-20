#include <stdio.h>
int main(){
   float notas[5];
   int i;
   for(i=0; i<5; i++)
   {
printf("Digite o valor da nota[%d]: ",i);
      scanf("%f", &notas[i]);
 }
 return 0;
}
