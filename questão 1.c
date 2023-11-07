#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int temperatura;

    printf("Informe a temperatura em °C:");
    scanf("%d", &temperatura);

    if (temperatura > 25)
    {
        printf("O clima está ensolarado");
    }
    else if (temperatura >=15 && temperatura <=25)
    {
        printf("O clima está nublado");
    }
    else
    {
        printf("O clima está chuvoso");
    }
    
    

    return 0;
}