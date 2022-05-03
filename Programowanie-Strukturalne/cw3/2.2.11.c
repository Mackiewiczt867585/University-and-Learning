#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int pierwiastek (int a)
{
    if (a==0) return 1;
    for (double i=1;i<a;i++)
    {
        if(i*i==a) return i;
    }
}

int suma (int a)
{
    int s=0;
    for(int i=0;i<=a;i++)
    {
    s=s+pierwiastek(i);
    }
    return s;
}

int main ()
{
    printf("%i\n",pierwiastek(9));
    printf("%i",suma(a));
    return 0;
}
