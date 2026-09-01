
#include <stdio.h>

int main()
{
    int numero_inicial = 0;
    int numero_final = 0;
    char resposta = 's';
    while (resposta == 's')
    {

        printf("escreva um numero para comecar uma contagem: ");
        scanf("%d", &numero_inicial);
        printf("escreva um numero para finalizar a contagem: ");
        scanf("%d", &numero_final);
        if (numero_inicial <= numero_final)
        {
            while (numero_inicial <= numero_final)
            {
                printf("contagem %d \n", numero_inicial);
                numero_inicial = numero_inicial + 1;
            }
        }
        if (numero_inicial >= numero_final)
        {
            while (numero_inicial >= numero_final)
            {
                printf("contagem %d \n", numero_inicial);
                numero_inicial = numero_inicial - 1;
            }
        }
        printf("jogar novamente ? ");
        scanf(" %c", &resposta);
    }
    printf("fim do programa");
    return 0;
}
