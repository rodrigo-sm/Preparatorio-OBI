#include <stdio.h>
#include <math.h>

int main()
{
    int l, a, p, r, c, e;

    scanf("%d %d %d %d", &l, &a, &p, &r);

    if ((l == a) && (a == p))
    {
        c = 4*pow(l,2);
    }else{
        c = 2*(l*a + l*p + p*a);
    }

    e = 4*(M_PI * pow(r,2));
    if (c > e)
    {
        printf("N\n");
    }else{
        printf("S\n");
    }
    return 0;
}
