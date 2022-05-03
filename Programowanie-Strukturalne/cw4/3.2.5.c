#include <stdio.h>
#include <stdlib.h>
int foo (int *x, int *y)
{
    return *x+*y;
}
int main()
{
    int x=4,y=5;
    printf("%i", foo(&x,&y));
    return 0;
}
