#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    scanf("%d",&c);
    char x[c];
    scanf("%s",x);
    int i,cont=0;
    for(i=0;x[i]!= '\0';i++)
    {
        if(x[i] == 'P')
            cont += 2;

        if(x[i] == 'C')
            cont += 2;

        if(x[i] == 'A')
            cont += 1;

    }
    printf("%d",cont);
    return 0;
}
