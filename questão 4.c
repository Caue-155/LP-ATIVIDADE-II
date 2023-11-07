#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int idade;

    printf("Informe a sua idade:");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("\nAcesso permitido!!!\n");
    }
    else
    {
        printf("\nAcesso negado!!!\n");
    }
    
   return 0; 
}