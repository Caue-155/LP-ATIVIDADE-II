#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao;
    do
    {
        

        printf("OPÇÃO |   IDIOMA        |\n");
        printf(" 1    | INGLÊS          |\n");
        printf(" 2    | ESPANHOL        |\n");
        printf(" 3    | FRANCÊS         |\n\n");

        printf("Ecolha o idioma de preferência:");
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
            printf("\nIdioma inválido\nEscolha o idioma novamente\n\n");
            break;
        }
    } while (opcao < 1 || opcao > 3);

    return 0;
}