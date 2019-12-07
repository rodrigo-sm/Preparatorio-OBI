#include <stdio.h>

int main ()
{
    int objetos, x1, y1, x2, y2, i, soma = 0, valor;

    scanf("%d", &objetos);

    for(i = 0; i < objetos; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        valor = pow(((x1 - x2) + (y1 - y2)),2);
        soma += valor;
    }
    printf("%d\n", soma);

    return 0;
}
