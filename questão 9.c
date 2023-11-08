#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL,"portuguese");
    
    int numero;
    int a;
    int primoOuNao = 1; 

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) 
    {
        primoOuNao = 0; 
    } else 
    {
        for (a = 2; a <= numero / 2; a++) 
        {
            if (numero % a == 0) 
            {
                primoOuNao = 0;
                break;
            }
        }
    }

    if (primoOuNao) 
    {
        printf("O número escolhido é primo\n");
    } else {
        printf("O número escolhido não primo\n");
    }

    return 0;
}