// Fazer um programa que obtenha uma frase e uma letra e a seguir escreva a quantidade de vezes que a letra ocorre na frase.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>

void main()
{

  // Define o valor das páginas de código UTF8 e default do Windows
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();

  // Define codificação como sendo UTF-8
  SetConsoleOutputCP(CPAGE_UTF8);
  // Inicio do Programa

  int i;
  char s[80];
  char l;

  printf("\nDigite uma frase: "); // Informa a frase
  gets(s);

  printf("\nInforme letra a ser procurada: ");
  l = getch(); // le um caractere (necessita o arquivo de cabecalhos conio.h)

  int ct = 0;        // contador de vezes que a letra aparece
  int n = strlen(s); // tamanho da cadeia
  for (i = 0; i < n; i++)
  {
    if (toupper(s[i]) == toupper(l))
      ct++;
  }

  printf("\nA letra \"%c\" aparece %d vezes na frase.", l, ct);

  return 0;

  // Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
}