#include <stdio.h>
#include <stdlib.h>
int pot(int n, int m)
{
    for (int i=1;i<m;i++)
    {
    n=n*n;
    }
    return n;
}
int main()
{
    int m,n;
    do
    {
    printf("podaj 2 liczby calkowite\n");
    printf("n=");
    scanf("%i", &n);
    printf("m=");
    scanf("%i", &m);
    }while (n==0 || m==0);
    printf("n^m=");
    printf("%i", pot(n,m));
    return 0;
}
