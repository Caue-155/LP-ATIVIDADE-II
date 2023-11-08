#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portugese");

    int opcao;
    double valor, resultado;

    while (1)
    {
        printf("Escolha uma das opções de conversão abaixo.\n\n");
        printf("1. Quilômetros para Milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("3. Sair do programa\n\n");
        printf("Digite o número da opção:");
        scanf("%d", &opcao);

        if (opcao == 3)
        {
            printf("Saindo do programa.\n");
            break;
        }

        system("CLS || CLEAR");

        switch (opcao)
        {
        case 1:
            printf("\n\nDigite a distância em quilômetros: ");
            scanf("%lf", &valor);
            resultado = valor * 0.621371;
            printf("\n\n%.2lf Quilômetros é igual a %.2lf milhas.\n\n", valor, resultado);
            break;
        case 2:
            printf("\n\nDigite a temperatura em graus Celsius: ");
            scanf("%lf", &valor);
            resultado = (valor * 9.0 / 5.0) + 32.0;
            printf("\n\n%.2lf Graus celsius é igual a %.2lf graus fahrenheit.\n\n", valor, resultado);
            break;
        default:
            printf("Opção inválida. Escolha uma opção válida.\n\n");
        }
    }

    return 0;
}