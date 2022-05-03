#include <stdio.h>
#include <stdlib.h>
void zero(int *tab[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<100;j++)
        {
        *(tab+i*100+j)=0;
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
    int n=3;
    int **tab[n][100];
    zero(tab,n);
    wypisz(tab,n,100);

    return 0;
}
