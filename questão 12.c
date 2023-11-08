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
            printf("Digite a %dº nota:", a);
            scanf("%f", &nota);

            system("CLS || CLEAR");

            if (nota < 0 || nota > 10)
            {
                printf("Nota inválida. \nDigite a nota novamnete...\n\n");
            }
        } while (nota < 0 || nota > 10);

        soma += nota;
        media = soma / 3;
    }

    system("cls || clear");
    printf("Média: %.2f \n\n", media);

    return 0;
}
