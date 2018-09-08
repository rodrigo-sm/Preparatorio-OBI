#include <stdio.h>

int main()
{
    int m,n,i,j,g,k=0;
    scanf("%d %d",&m,&n);
    char str[m][n+1];
    for(i=0; i<m; i++){
        scanf("%s",str[i]);
    }
     for(i=0; i<m;i++){
        for(j=0; j<n; j++){
            if (str[i][j] == '#' && (i==0 || j==0 || i == m-1 || j == n-1 || str[i+1][j]=='.' || str[i-1][j]=='.' || str[i][j+1]=='.' || str[i][j-1]=='.')){
                k++;

            }
        }
    }
    printf("%d\n",k);
    return 0;
}
