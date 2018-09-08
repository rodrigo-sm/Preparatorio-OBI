#include <stdio.h>

int main ()
{
    int pessoas, capacidade, i, n_pessoas = 0;
    char resp = 'N';

     scanf("%d %d", &pessoas, &capacidade);

    for (i = 0; i < pessoas; i++)
    {
        int s, e;
        scanf("%d %d", &s, &e);
        n_pessoas = n_pessoas - s + e;

        if (n_pessoas > capacidade)
        {
            resp = 'S';
        }

    }
    printf("%c", resp);

    return 0;
}
