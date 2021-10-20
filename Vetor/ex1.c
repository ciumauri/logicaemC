#include <stdio.h>
/*define constante*/
#define TAM 6
int main(){
float notas[TAM], soma = 0, media;
int i;
for(i=0; i<TAM; i++)
{
printf("Digite o valor da nota[%d]: ",i+1);
scanf("%f", &notas[i]);
soma = soma + notas[i];
}
printf("\nCalculo da media\n");
media = soma/TAM;
printf("\nAs notas digitadas foram: \n");
for(i=0; i<TAM; i++)
{
	printf("%dª nota = %.1f\n", i+1, notas[i]);
}
printf("\nMedia = %.1f", media);
return 0;
}
