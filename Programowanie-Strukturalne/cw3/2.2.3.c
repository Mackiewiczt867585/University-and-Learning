#include <stdio.h>
#include <stdlib.h>
int dzielnik (int n)
{
    int i,d;
    n=(n/2);
    for (i=1; i<=n; i=i+1)
    {
        if(n%i==0)
        {
        d=i;
        }
    }
    return d;
}
int main()
{
    int n;
    printf("podaj dowolna liczbe calkowita (n>2):");
    scanf("%i", &n);
    printf("k- najwiekszy dzielnik n mniejszy od niego\n");
    printf("k=");
    printf("%i", dzielnik(n));
    return 0;
}
