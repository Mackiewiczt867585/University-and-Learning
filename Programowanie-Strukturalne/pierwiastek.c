#include <stdio.h>
#include <stdlib.h>
int potega(int n,int m)
{
    if (m==0) return 1;
    int x=n;
    for(int i=1;i<m;i++)
    {
    n*=x;
    }
    return n;
}
int pierwiastek(int n,int m)
{
    for(int i=1;i<n;i++)
    {
        if(potega(i,m)==n) return i;
    }
    return pierwiastek(n-1,m);
}
int main()
{
    printf("sqrt(n,m)\n");
    printf("%i",pierwiastek(8,3));
    return 0;
}
