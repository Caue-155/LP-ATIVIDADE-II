#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
     
    int opcao;
    do
    {
        

        printf("OPÇÃO |  ROUPA             |\n");
        printf(" 1    | CAMISETA           |\n");
        printf(" 2    | CALÇA              |\n");
        printf(" 3    | SAPATO             |\n\n");

        printf("Ecolha o produto:");
        scanf("%d", &opcao);

        system("CLS || CLEAR");

        switch (opcao)
        {
        case 1:
            printf("Camiseta\n");
            printf("Valor:R$ 600,00");
            break;

        case 2:
            printf("Calça\n");
            printf("Valor:R$ 1.200,00");
            break;

        case 3:
            printf("Sapato\n");
            printf("Valor:R$ 2.500,00");
            break;

        default:
            printf("\nOpção inválida\nEscolha novamente\n\n");
            break;
        }
    } while (opcao < 1 || opcao > 3);

    return 0;
}
