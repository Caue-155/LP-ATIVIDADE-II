#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float soma;
    int a;
    float nota;
    float media;

    for (a = 1; a <= 3; a++)
    {
        do
        {
            printf("Digite a %d� nota:", a);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10)
            {
                printf("Nota inv�lida. \nDigite a nota novamnete...\n\n");
            }
        } while (nota < 0 || nota > 10);

        soma += nota;
        media = soma / 3;
    }

    system("cls || clear");
    printf("M�dia: %.2f \n\n", media);

    return 0;
}