#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
     
    int opcao;
    
    do
    {
        
        printf("OPÇÃO  |    FUNÇÃO            |\n");
        printf("  1    |  NOVO JOGO           |\n");
        printf("  2    |  CARREAGR JOGO       |\n");
        printf("  3    |  CONFIGURAÇÕES       |\n\n");

        printf("Ecolha a função:");
        scanf("%d", &opcao);

        system("CLS || CLEAR");

        switch (opcao)
        {
        case 1:
            printf(" DIFICULDADE\n"  );
            printf("    FÁCIL\n"     );
            printf("    MÉDIO\n"     );
            printf("    DIFÍCIL\n\n" );
            printf("Começar jogo"    );
            break;

        case 2:
            printf("Começar do ultimo ponto salvo\n");
            break;

        case 3:
            printf("GRÁFICOS |  FPS   | IDIOMA    |\n");
            printf(" SUAVE   | NORMAL | PORTUGUÊS |\n");
            printf(" PADRÃO  | ALTO   | INGLÊS    |\n");
            printf(" ULTRA   |        | ESPANHOL  |\n");
            break;

        default:
            printf("\nOpção inválida\nEscolha novamente\n\n");
            break;
        }
    } while (opcao < 1 || opcao > 3);

    return 0;
}
