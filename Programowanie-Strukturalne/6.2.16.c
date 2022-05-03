#include <stdio.h>
#include <stdlib.h>
int (*stworz(int n,int m))[]
{
    return malloc(n*sizeof(int[m]));
}
float big(int *tab,int n,int m)
{
    float sm=0,big;
    big=(*tab+*(tab+1)+*(tab+2));
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        sm+=*(tab+i*m+j);
        }
    sm/=m;
    if(big<sm) big=sm;
    }
    return big;
}
void wypelnij (int * tab[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        *(tab+i*m+j)=i+j;
        }
    }
}
void wypisz (int *tab[],int n,int m)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
        printf("[%d][%d]=%d\n",i,j,*(tab+i*m+j));
        }
    }
}
int main()
{
    int **tab=stworz(3,4);
    wypelnij(tab,3,4);
    wypisz(tab,3,4);
    printf("%f",big(tab,3,4));

    return 0;
}
