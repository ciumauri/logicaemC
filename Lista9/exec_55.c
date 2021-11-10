//Faça um programa que leia uma string e troque todos os caracteres para caracteres maiúsculos.

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <windows.h>

void main()
{

  // Define o valor das páginas de código UTF8 e default do Windows
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();

  // Define codificação como sendo UTF-8
  SetConsoleOutputCP(CPAGE_UTF8);
  // Inicio do Programa

  char str1[] = "lua";
  char str2[] = "cheia";

  strcat(str1, str2);

  printf("Após concatenar: string1: %s\n", str1);
  printf("string2: %s", str2);

  return 0;

  // Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
}