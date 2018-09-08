#include <stdio.h>

int main()
{
    int n,c,m;
    scanf("%d %d %d", &n, &c, &m);
    int y[50],i,r=0,x;
    for(i=0;i<c;i++)
    {
        scanf("%d", &x);
        y[x] = 1;
    }
    for(i=0;i<m;i++)
    {
        scanf("%d", &x);
        if(y[x] == 1)
            r++;
    }

    printf("%d\n", c - r);
    return 0;
}
