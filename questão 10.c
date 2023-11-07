#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float primeiroNumero;
    float segundoNumero;
    char operacao;
    float resultado;

    printf("Digite o primeiro número: ");
    scanf("%f", &primeiroNumero);

    system("cls || clear");

    printf("Digite o segundo número: ");
    scanf("%f", &segundoNumero);

    fflush(stdin);
    system("cls || clear");

    printf("Digite + para somar \n");
    printf("Digite - para subtrair \n\n");

    printf("Escolha a operação desejada: ");
    scanf("%c", &operacao);

    system("cls || clear");

    switch (operacao)
    {
    case '+':
        resultado = primeiroNumero + segundoNumero;
        break;
    case '-':
        resultado = primeiroNumero - segundoNumero;
        break;
    default:
        printf("Opção inválida!!! \n");
        break;
    }

    printf("Primeiro número: %.1f \n\n", primeiroNumero);
    printf("Segundo número: %.1f \n\n", segundoNumero);
    printf("Operação escolhida: %c \n\n", operacao);
    printf("Resultado: %.1f \n\n", resultado);

    return 0;
}