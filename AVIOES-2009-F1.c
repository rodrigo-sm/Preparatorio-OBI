#include <stdio.h>

main ()
{
    int n;

    scanf("%d", &n);

    if(n == 0)
    {
        printf("E\n");
    } else {

    if(n <= 35)
    {
        printf("D\n");
    } else {

    if(n <= 60)
    {
        printf("C\n");
    } else {

    if (n <= 61)
    {
        printf ("B\n");
    } else {

    if (n <= 100)
    {
        printf("A\n");
    }}}}}

    return 0;
}
