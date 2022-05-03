#include <stdio.h>
#include <stdlib.h>
int foo (int n,int m)
{
    if(m==0) return 1;
    if(n==0) return 1;
    return foo(n-1,m)-foo(n,m-1)+5;
}
int main()
{
    int n=3,m=3;
    printf("%i",foo(n,m));
    return 0;
}
