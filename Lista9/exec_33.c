//Faça um programa que leia uma string e troque todos os caracteres para caracteres maiúsculos.

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

  printf("\nDigite uma frase: "); // Informa a frase
  gets(s);

  for (i = 0; i < 80; i++)
  {
    s[i] = toupper(s[i]);
  }

  printf("\n%s\n", s);

  return 0;

  // Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
}