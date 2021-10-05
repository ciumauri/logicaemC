#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
  // Define o valor das páginas de código UTF8 e default do Windows
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();

  // Define codificação como sendo UTF-8
  SetConsoleOutputCP(CPAGE_UTF8);
  // Inicio do Programa
  char seletor;
  printf("É mamífero? (S/N) ");
  scanf("%c", &seletor);
  if (seletor == 's' || seletor == 'S')
  {
    printf("É quadrúpede? (S/N) ");
    scanf(" %c", &seletor);
    if (seletor == 's' || seletor == 'S')
    {
      printf("É carnívoro? (S/N) ");
      scanf(" %c", &seletor);
      if (seletor == 's' || seletor == 'S')
      {
        printf("O animal escolhido foi o leão\n");
      }
      else
      {
        printf("É herbívoro? (S/N) ");
        scanf(" %c", &seletor);
        if (seletor == 's' || seletor == 'S')
        {
          printf("O animal escolhido foi o cavalo\n");
        }
        else
        {
          printf("O animal escolhido não está cadastrado\n");
        }
      }
    }
    else
    {
      printf("É bípede? (S/N) ");
      scanf(" %c", &seletor);
      if (seletor == 's' || seletor == 'S')
      {
        printf("É onívoro? (S/N) ");
        scanf(" %c", &seletor);
        if (seletor == 's' || seletor == 'S')
        {
          printf("O animal escolhido foi o homem\n");
        }
        else
        {
          printf("É frutífero? (S/N) ");
          scanf(" %c", &seletor);
          if (seletor == 's' || seletor == 'S')
          {
            printf("O animal escolhido foi o macaco\n");
          }
          else
          {
            printf("O animal escolhido não está cadastrado\n");
          }
        }
      }
      else
      {
        printf("É voador? (S/N) ");
        scanf(" %c", &seletor);
        if (seletor == 's' || seletor == 'S')
        {
          printf("O animal escolhido foi o morcego\n");
        }
        else
        {
          printf("É aquático? (S/N) ");
          scanf(" %c", &seletor);
          if (seletor == 's' || seletor == 'S')
          {
            printf("O animal escolhido foi a baleia\n");
          }
          else
          {
            printf("O animal escolhido não está cadastrado\n");
          }
        }
      }
    }
  }
  else
  {
    printf("É ave? (S/N) ");
    scanf(" %c", &seletor);
    if (seletor == 's' || seletor == 'S')
    {
      printf("É não-voadora? (S/N) ");
      scanf(" %c", &seletor);
      if (seletor == 's' || seletor == 'S')
      {
        printf("É tropical? (S/N) ");
        scanf(" %c", &seletor);
        if (seletor == 's' || seletor == 'S')
        {
          printf("O animal escolhido foi o avestruz\n");
        }
        else
        {
          printf("É polar? (S/N) ");
          scanf(" %c", &seletor);
          if (seletor == 's' || seletor == 'S')
          {
            printf("O animal escolhido foi o pinguim\n");
          }
          else
          {
            printf("O animal escolhido não está cadastrado\n");
          }
        }
      }
      else
      {
        printf("É nadadora? (S/N) ");
        scanf(" %c", &seletor);
        if (seletor == 's' || seletor == 'S')
        {
          printf("O animal escolhido foi o pato\n");
        }
        else
        {
          printf("É de rapina? (S/N) ");
          scanf(" %c", &seletor);
          if (seletor == 's' || seletor == 'S')
          {
            printf("O animal escolhido foi a águia\n");
          }
          else
          {
            printf("O animal escolhido não está cadastrado\n");
          }
        }
      }
    }
    else
    {
      printf("É réptil? (S/N) ");
      scanf(" %c", &seletor);
      if (seletor == 's' || seletor == 'S')
      {
        printf("É com casco? (S/N) ");
        scanf(" %c", &seletor);
        if (seletor == 's' || seletor == 'S')
        {
          printf("O animal escolhido foi a tartaruga\n");
        }
        else
        {
          printf("É carnívoro? (S/N) ");
          scanf(" %c", &seletor);
          if (seletor == 's' || seletor == 'S')
          {
            printf("O animal escolhido foi o crocodilo\n");
          }
          else
          {
            printf("É sem patas? (S/N) ");
            scanf(" %c", &seletor);
            if (seletor == 's' || seletor == 'S')
            {
              printf("O animal escolhido foi a cobra\n");
            }
            else
            {
              printf("O animal escolhido não está cadastrado\n");
            }
          }
        }
      }
      else
      {
        printf("O animal escolhido não está cadastrado\n");
      }
    }
  }
  return 0;

  // Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
}