#include <stdio.h>

int main()
{
    int numero_faixa_premiacao, forca, i, faixa_premiacao;

    scanf("%d %d", &faixa_premiacao, &forca);

    for(i = 1; i < numero_faixa_premiacao; i++)
    {
        int vet[numero_faixa_premiacao];
        scanf("%d", &vet[i]);
    }
    return 0;

}
