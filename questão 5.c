#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao;
    do
    {
        

        printf("OP��O |   IDIOMA        |\n");
        printf(" 1    | INGL�S          |\n");
        printf(" 2    | ESPANHOL        |\n");
        printf(" 3    | FRANC�S         |\n\n");

        printf("Ecolha o idioma de prefer�ncia:");
        scanf("%d", &opcao);

        system("CLS || CLEAR");

        switch (opcao)
        {
        case 1:
            printf("Welcome!!!\n");
            break;

        case 2:
            printf("Bienvenida!!!\n");
            break;

        case 3:
            printf("Accueillir!!!\n");
            break;

        default:
            printf("\nIdioma inv�lido\nEscolha o idioma novamente\n\n");
            break;
        }
    } while (opcao < 1 || opcao > 3);

    return 0;
}