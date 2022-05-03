#include <stdio.h>
#include <stdlib.h>
void foo (int *x, int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}
int main()
{
    int x=10,y=2;
    foo(&x,&y);
    printf("%i\n",x);
    printf("%i\n",y);
    return 0;
}
