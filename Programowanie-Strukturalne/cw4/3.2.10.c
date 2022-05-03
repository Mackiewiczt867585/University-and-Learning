#include <stdio.h>
#include <stdlib.h>
double *foo ()
{
    return malloc(sizeof(double));
}
int main()
{
    printf("%d",foo());
    return 0;
}
