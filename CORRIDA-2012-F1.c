#include <stdio.h>

main ()
{
    int C, N;

    printf("Informe o quanto Leonardo pretende correr\n");
    scanf("%d", &C);
    printf("Informe o comprimento da pista\n");
    scanf("%d", &N);
    printf("O termino sera em %d", C % N);
    return 0;
}
