#include <stdio.h>

int main()
{
    int album_largura, album_altura;
    scanf("%d %d", &album_largura, &album_altura);

    int f1_largura, f1_altura, f2_largura, f2_altura;
    scanf(" %d %d", &f1_largura, &f1_altura);
    scanf(" %d %d", &f2_largura, &f2_altura);

    // Vertical
    // f1 n f2 n
    if(f1_altura + f2_altura <= album_altura && f1_largura <= album_largura && f2_largura <= album_largura) {
        printf("S\n");
    }
    // f1 r f2 r
    else if(f1_largura + f2_largura <= album_altura && f1_altura <= album_largura && f2_altura <= album_largura) {
            printf("S\n");
    }
    // f1 n f2 r
    else if(f1_altura + f2_largura <= album_altura && f1_largura <= album_largura && f2_altura <= album_largura) {
        printf("S\n");
    }
    // f1 r f2 n
    else if(f1_largura + f2_altura <= album_altura && f1_altura <= album_largura && f2_largura <= album_largura) {
        printf("S\n");
    }

    // Horizontal
    // f1 n f2 n
    else if(f1_largura + f2_largura <= album_largura && f1_altura <= album_altura && f2_altura <= album_altura) {
            printf("S\n");
    }
    // f1 r f2 r
    else if(f1_altura + f2_altura <= album_largura && f1_largura <= album_altura && f2_largura <= album_altura) {
        printf("S\n");
    }
    // f1 r f2 n
    else if(f1_altura + f2_largura <= album_largura && f1_largura <= album_altura && f2_altura <= album_altura) {
        printf("S\n");
    }
    // f1 n f2 r
    else if(f1_largura + f2_altura <= album_largura && f1_altura <= album_altura && f2_largura <= album_altura) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }

    return 0;
}
