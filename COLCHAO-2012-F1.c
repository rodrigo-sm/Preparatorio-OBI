#include <stdio.h>

int main()
{
    int a, b, c, h, l;

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d", &h, &l);

    if ((b <= h)|(b <= l))
    {

        printf("S\n");

    }else{
        printf("N\n");
    }

    return 0;
}
