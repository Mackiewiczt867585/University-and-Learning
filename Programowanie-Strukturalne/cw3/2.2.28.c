#include <stdio.h>
#include <stdlib.h>

int foo (int n, int m)
{
    if (m==0) return n;
    if (m>0 && n>=m) return (n-m+foo(n-1,m)+foo(n,m-1));
    else return foo(m,n);
}
int main()
{
    int n,m;
    printf("n=");
    scanf("%i",&n);
    printf("m=");
    scanf("%i",&m);
    printf("%i",foo(n,m));
    return 0;
}
