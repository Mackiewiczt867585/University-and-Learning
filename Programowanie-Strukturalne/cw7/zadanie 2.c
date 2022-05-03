#include <stdio.h>
#include <stdlib.h>
float foo (int n)
{
    if (n==0) return 1;
    float bot=3;
    for(int i=1;i<n;i++)
    {
    bot*=bot;
    }
    return (1/bot);
}
int main()
{
    int n=2;
    printf("%f",foo(n));
    return 0;
}
