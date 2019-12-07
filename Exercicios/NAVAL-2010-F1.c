#include <stdio.h>
#include <stdbool.h>

void marcar_visitado(int l, int c, int n, int m, char tab[][m])
{
	tab[l][c] = '$';
    if (l > 0 && tab[l - 1][c] != '.' && tab[l - 1][c] != '$')
     	marcar_visitado(l - 1, c, n, m, tab);
    if (l < n - 1 && tab[l + 1][c] != '.' && tab[l + 1][c] != '$')
        marcar_visitado(l + 1, c, n, m, tab);
    if (c > 0 && tab[l][c - 1] != '.' && tab[l][c - 1] != '$')
        marcar_visitado(l, c - 1, n, m, tab);
    if (c < m - 1 && tab[l][c + 1] != '.' && tab[l][c + 1] != '$')
        marcar_visitado(l, c + 1, n, m, tab);
}

bool afundou(int l, int c, int n, int m, char tab[][m])
{
    tab[l][c] = '+';
    if (l > 0 && tab[l - 1][c] == '#')
        return false;
    if (l < n - 1 && tab[l + 1][c] == '#')
        return false;
    if (c > 0 && tab[l][c - 1] == '#')
        return false;
    if (c < m - 1 && tab[l][c + 1] == '#')
        return false;
    if (l > 0 && tab[l - 1][c] == '*' && !afundou(l - 1, c, n, m, tab))
        return false;
    if (l < n - 1 && tab[l + 1][c] == '*' && !afundou(l + 1, c, n, m, tab))
        return false;
    if (c > 0 && tab[l][c - 1] == '*' && !afundou(l, c - 1, n, m, tab))
        return false;
    if (c < m - 1 && tab[l][c + 1] == '*' && !afundou(l, c + 1, n, m, tab))
        return false;
    return true;
}

int main()
{
    int n, m, i, j, k, x, y, cont = 0;
    scanf("%d %d", &n, &m);
    char tab[n][m];
    getchar();
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            tab[i][j] = getchar();
        }
        getchar();
    }
/*    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            putchar(tab[i][j]);
        }
        putchar('\n');
    } */
    scanf("%d", &k);
    for (i = 1; i <= k; i++) {
        scanf("%d %d", &x, &y);
        if (tab[x - 1][y - 1] == '#')
            tab[x - 1][y - 1] = '*';
    }
/*
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            putchar(tab[i][j]);
        }
        putchar('\n');
    }
    */

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (tab[i][j] == '*') {
            	if(afundou(i, j, n, m, tab)) {
	             	cont++;
	            }
	            else {
	            	marcar_visitado(i, j, n, m, tab);
	            }
            }
        }
    }
    printf("%d\n", cont);
    return 0;
}
