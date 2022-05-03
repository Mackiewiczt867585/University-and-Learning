#include <stdio.h>
#include <stdlib.h>
void foo (int n, int *w)
{
    *w=n;
}
int main()
{
    int n=2,w=4;
    printf("%i\n",w);
    foo(n,&w);
    printf("%i",w);
    return 0;
}
