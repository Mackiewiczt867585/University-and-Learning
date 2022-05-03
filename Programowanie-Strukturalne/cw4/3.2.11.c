#include <stdio.h>
#include <stdlib.h>
int *foo(unsigned int n)
{
    return malloc(n*sizeof(int));
}
int main()
{
    unsigned int n=2;
    printf("%i\n",foo(n));
    return 0;
}
