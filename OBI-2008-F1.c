#include <stdio.h>

int main()
{
    int competidores, pontos_minimos, pontuacao_1, pontuacao_2, i, cont = 0;

    scanf("%d %d", &competidores, &pontos_minimos);/*SÓ TESTA A CONDIÇÃO SE ELA FOR VERDADE*/

    for (i = 0; i < competidores; i++)
    {
        scanf("%d %d", &pontuacao_1, &pontuacao_2);
        if (pontuacao_1 + pontuacao_2 >= pontos_minimos)
        {
            cont++;
        }
    }
    printf("%d\n", cont);

    return 0;
}
