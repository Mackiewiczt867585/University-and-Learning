#include <stdio.h>
#include <stdlib.h>
int foo (int *x, int *y)
{
    if (*x>*y) return *x;
    else if (*y>*x) return *y;
    else return 0;
}
int main()
{
    int x=10,y=2;
    printf("%i", foo(&x,&y));
    return 0;
}
