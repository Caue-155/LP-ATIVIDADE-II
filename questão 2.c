#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float precoProduto;
    int opcao;
    float desconto;
    float precoFinal;

    printf("DATA |   DIA        |\n");
    printf(" 1   | DOMINGO      |\n");
    printf(" 2   | SEGUNDA-FEIRA|\n");
    printf(" 3   | TERÇA-FEIRA  |\n");
    printf(" 4   | QUARTA-FEIRA |\n");
    printf(" 5   | QUINTA-FEIRA |\n");
    printf(" 6   | SEXTA-FEIRA  |\n");
    printf(" 7   | SABÁDO       |\n\n");

    printf("Informe o dia em que a compra foi realizada:");
    scanf("%d", &opcao);

    system("CLS || CLEAR");

    switch (opcao)
    {
    case 1:
        printf("Informe o valor da compra:");
        scanf("%f", &precoProduto);

        if (precoProduto > 100)
        {
            precoFinal = precoProduto * 0.85;

            printf("Preço com o desconto:R$ %.2f ", precoFinal);
        }
        else
        {
            printf("Sem desconto! \n");
            printf("Preço final:R$ %.2f", precoProduto);
        }

        break;

     case 2:
        printf("Informe o valor da compra:");
        scanf("%f", &precoProduto);

        if (precoProduto > 100)
        {
            precoFinal = precoProduto * 0.90;

            printf("Preço com o desconto:R$ %.2f ", precoFinal);
        }
        else
        {
            printf("Sem desconto! \n");
            printf("Preço final:R$ %.2f", precoProduto);
        }

        break;

     case 3:
        printf("Informe o valor da compra:");
        scanf("%f", &precoProduto);

        if (precoProduto > 100)
        {
            precoFinal = precoProduto * 0.90;

            printf("Preço com o desconto:R$ %.2f ", precoFinal);
        }
        else
        {
            printf("Sem desconto! \n");
            printf("Preço final:R$ %.2f", precoProduto);
        }
        break;

     case 4:
        printf("Informe o valor da compra:");
        scanf("%f", &precoProduto);

        if (precoProduto > 100)
        {
            precoFinal = precoProduto * 0.90;

            printf("Preço com o desconto:R$ %.2f ", precoFinal);
        }
        else
        {
            printf("Sem desconto! \n");
            printf("Preço final:R$ %.2f", precoProduto);
        }
        break;

     case 5:
        printf("Informe o valor da compra:");
        scanf("%f", &precoProduto);

        if (precoProduto > 100)
        {
            precoFinal = precoProduto * 0.90;

            printf("Preço com o desconto:R$ %.2f ", precoFinal);
        }
        else
        {
            printf("Sem desconto! \n");
            printf("Preço final:R$ %.2f", precoProduto);
        }
        break;

     case 6:
        printf("Informe o valor da compra:");
        scanf("%f", &precoProduto);

        if (precoProduto > 100)
        {
            precoFinal = precoProduto * 0.90;

            printf("Preço com o desconto:R$ %.2f ", precoFinal);
        }
        else
        {
            printf("Sem desconto! \n");
            printf("Preço final:R$ %.2f", precoProduto);
        }
        break;

     case 7:
        printf("Informe o valor da compra:");
        scanf("%f", &precoProduto);

        if (precoProduto > 100)
        {
            precoFinal = precoProduto * 0.85;

            printf("Preço com o desconto:R$ %.2f ", precoFinal);
        }
        else
        {
            printf("Sem desconto! \n");
            printf("Preço final:R$ %.2f", precoProduto);
        }
        break;
     default:
        printf("Opção inválida!");
        break;
    }
    return 0;
}