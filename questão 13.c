#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int primeiroNumero;
    int segundoNumero;
    int maior;
    int menor;
   
    printf("Digite o primeiro número:");
    scanf("%d", &primeiroNumero);

    system("cls || clear");

    printf("Digite o segundo número:");
    scanf("%d", &segundoNumero);

    system("cls || clear");

    maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    menor = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;

    if (primeiroNumero > segundoNumero)
    {
        printf("Maior número: %d \n", maior);
    }
    else
    {
        printf("Maior número: %d \n", maior);
    }

    return 0;
}