#include <stdio.h>

int main ()
{
    int objetos, x1, y1, x2, y2, i;
    double distancia, soma = 0;

    scanf("%d", &objetos);

    for(i = 1; i <= objetos; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2,2));/*FÓRMULA DA DISTÂNCIA ENTRE DOIS PONTOS*/
        soma += pow(distancia,2);
    }
    printf("%.01f\n", soma);

    return 0;
}
