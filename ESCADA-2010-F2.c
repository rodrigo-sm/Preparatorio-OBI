#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,s,soma=0,func=0,i;
    scanf("%d",&n);
    for(i=2;i <= n; i++)
    {
        scanf("%d",&t);
        if(t < func)
        {
          soma -= func - t;
        }
        func += 10;
        soma  += 10;
    }
    printf("%d\n",soma);
    return 0;
}
