#include <stdio.h>

int main()
{
    int l,c,i,pm,pi=0;
    scanf("%d", &l);
    scanf("%d", &c);
    pm = ((l - 1) * 2) + ((c-1)*2);
    pi = (l * c) + ( (l * l)- 1);
    printf("%d\n%d\n", pi, pm);
    return 0;
}
