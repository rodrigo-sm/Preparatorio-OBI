#include <stdio.h>

int main()
{
    int n,i;

    printf("INFORME A QUANTIDADE DE ALUNOS\n");
    scanf("%d", &n);
    int vet[n];

    printf("INFORME OS VETORES\n");
    for (i = 0; i < n; i++)
    {
       scanf("%d", &vet[i]);
    }

    printf("\n");
    printf("IMPRESSAO DOS VETORES\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\n", vet[i]);
    }
    return 0;
}
