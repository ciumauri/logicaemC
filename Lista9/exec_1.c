// Fazer um programa para contar quantos vezes a letra A aparece na frase
// uma frase fornecida pelo usuario.

#include <stdio.h>
#include <string.h>
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

    printf("\nDigite uma frase: ");
    gets(s);

    int ct = 0;        // contador de vezes que a letra aparece
    int n = strlen(s); // tamanho da cadeia
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'á' || s[i] == 'ã' || s[i] == 'à' || s[i] == 'A' || s[i] == 'Á' || s[i] == 'Ã' || s[i] == 'À')
            ct++;
    }

    printf("\nA letra A aparece %d vezes na frase.", ct);

    return 0;

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
}