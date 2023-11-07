#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float media;
    float nota;

    do
    {

        printf("Digite a nota do aluno:");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10)
        {
            printf("Nota inválida.\nDigite a nota novamente...\n\n");
        }

    } while (nota < 0 || nota > 10);
    system("CLS || CLEAR");

    if (nota >= 9)
    {
        printf("Excelente!!!");
    }
    else if (nota >= 7 && nota <= 8.9)
    {
        printf("Bom !!!");
    }
    else if (nota >=5 && nota <= 6.9)
    {
        printf("Razoável");
    }
    else
    {
        printf("Insuficiente");
    }
    

    return 0;
}