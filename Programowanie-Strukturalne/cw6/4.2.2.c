#include <stdio.h>
#include <stdlib.h>
float a(int n, int tab[])
{
    float avg=0;
    for(int i=0;i<n;i++)
    {
    avg+=tab[i];
    }
    avg/=n;
    return avg;
}
float b(int n, int tab[])
{
    float sum=0;
    for (int i=0;i<n;i++)
    {
    sum+=tab[i];
    }
    return sum;
}
float c(int n,int tab[])
{
    float pot,sum=0;
    for (int i=0;i<n;i++)
    {
    pot=tab[i]*tab[i];
    sum+=pot;
    }
    return sum;
}
int main()
{
    int tablica[] = {3,2,1};
    printf("%f\n",a(3,tablica));
    printf("%f\n",b(3,tablica));
    printf("%f\n",c(3,tablica));
    return 0;
}
