#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;
    int contador = 0;
    int pares = 0;
    int impares = 0;
    int somaPar = 0;
    float somaGeral = 0;
    float mediaGeral = 0;
    float mediaPares = 0;

    do
    {
        printf("Digite o %d� valor:", contador + 1);
        scanf("%d", &numero);

        if (numero > 0)
        {
            somaGeral += numero;
            contador++;

            if (numero % 2 == 0)
            {
                pares++;
                somaPar += numero;
            }
            else
            {
                impares++;
            }
        }
    } while (numero >= 0);

    mediaPares = somaPar / (float)pares;
    mediaGeral = somaGeral / (float)contador;

    system("cls || clear");

    printf("Quantidade de pares: %d \n", pares);
    printf("Quantidade de �mpares: %d \n", impares);
    printf("M�dia de n�meros pares: %.2f\n", mediaPares);
    printf("M�dia de n�meros totais: %.2f\n", mediaGeral);

    return 0;
}