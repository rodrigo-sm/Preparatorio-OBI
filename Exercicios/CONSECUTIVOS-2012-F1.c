#include <stdio.h>

int main()
{
    int n, maior = 1, cont = 1, i;

    scanf("%d", &n);

    for(i = 0; i < n-1; i++)
    {
        int a[n];
        scanf("%d", &a[i]);
        if(a[i] == a[i + 1])
        {
            cont++;
            if (cont > maior)
            {
                maior = cont;
            }else{
            cont = 1;
        }
    }
    printf("%d", maior);
    return 0;

    }
}
