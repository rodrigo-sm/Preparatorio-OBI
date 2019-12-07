#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);
    printf("%d\n", 1986 + ((a - 1986) / 76 + 1) * 76);

    return 0;
}
