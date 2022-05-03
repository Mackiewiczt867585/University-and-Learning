#include <stdio.h>
#include <stdlib.h>
float foo (unsigned int n,const int tab[])
{
    float avg=0;
    for (int i=0;i<n;i++)
    {
    avg+=tab[i];
    }
    avg/=n;
    return avg;
}
int main()
{
    const int tablica[] = {2,3,4};
    printf("%f",foo(3,tablica));
    return 0;
}
