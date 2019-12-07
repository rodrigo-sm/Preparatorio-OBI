#include <stdio.h>

int main()
{
    int n, k, i, j, soma;
    scanf("%d", &n);
    int c[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }
    scanf("%d", &k);
    for (i = 0, j = n - 1; (soma = c[i] + c[j]) != k; soma < k ? i++ : j--);
    /*
    i = 0;
    j = n - 1;
    while ((soma = c[i] + c[j]) != k) {
        if (soma < k) {
            i++;
        }
        else {
            j--;
        }
    }
    */
    printf("%d %d\n", c[i], c[j]);
    return 0;
}
