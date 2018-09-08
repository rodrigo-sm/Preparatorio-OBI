#include <stdio.h>

int main()
{
    int n, p, q, t;
    char c;

    scanf("%d", &n);
    scanf("%d %c %d", &p, &c, &q);

    if (c=='+')
    {
        t = p + q;

        if (n < t)
        {
            printf("OVERFLOW");
        }else{
            printf("OK");
        }
    }
    if (c=='*')
    {
        t = p * q;

        if (n < t)
        {
            printf("OVERFLOW");
        }else{
            printf("OK");
        }
    }
    return 0;
}
