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
   
    printf("Digite o primeiro n�mero:");
    scanf("%d", &primeiroNumero);

    system("cls || clear");

    printf("Digite o segundo n�mero:");
    scanf("%d", &segundoNumero);

    system("cls || clear");

    maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    menor = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;

    if (primeiroNumero > segundoNumero)
    {
        printf("Maior n�mero: %d \n", maior);
    }
    else
    {
        printf("Maior n�mero: %d \n", maior);
    }

    return 0;
}