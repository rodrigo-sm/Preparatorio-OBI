#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,y=0,x=0,d,i;
    char c;
    char res = 'N';
    scanf("%d %d",&n,&m);
    for(i=1;i <= n; i++)
    {
        scanf(" %c %d",&c,&d);
        switch(c)

        case 'S': y -= d;break;


        case 'N': y += d; break;


        case 'O': x -= d;break;


        case 'L': x += d;break;

        if (x > m || y > m)
            res = 'S';
    }
        printf("%c\n",res);
}
