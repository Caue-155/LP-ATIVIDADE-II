#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
     
    int opcao;
    do
    {
        

        printf("OP��O |  ROUPA             |\n");
        printf(" 1    | CAMISETA           |\n");
        printf(" 2    | CAL�A              |\n");
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
            printf("Cal�a\n");
            printf("Valor:R$ 1.200,00");
            break;

        case 3:
            printf("Sapato\n");
            printf("Valor:R$ 2.500,00");
            break;

        default:
            printf("\nOp��o inv�lida\nEscolha novamente\n\n");
            break;
        }
    } while (opcao < 1 || opcao > 3);

    return 0;
}
