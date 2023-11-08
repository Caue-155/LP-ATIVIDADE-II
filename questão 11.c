#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char codigoSalvo[200] = "senha";
    char codigo[200];

    do
    {

        printf("Digite o código de acesso:");
        gets(codigo);

        system("CLS || CLEAR");

        if (strcmp(codigo, codigoSalvo) == 0)
        {
            printf("\nBem vindo!\n\n");
        }
        else
        {
            printf("\nAcesso negado!\nDigite novamente\n\n");
        }

    } while ((strcmp(codigo, codigoSalvo) != 0));

    return 0;
}