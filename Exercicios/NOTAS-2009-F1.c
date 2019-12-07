#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n == 0){
        printf("E");
    }else{
    if (n <= 35){
        printf("D");
    }else{
    if (n <= 60){
        printf("C");
    }else{
    if (n <= 85){
        printf("B");
    }else{
    if (n <= 100){
        printf("A");
    }}}}}
    return 0;
}
