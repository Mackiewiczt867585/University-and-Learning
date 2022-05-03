#include <stdio.h>
#include <stdlib.h>
int **stworz(int n,int m)
{
    int **tab=malloc(n*sizeof(int*));
    for(int i=0;i<m;i++)
    {
        *(tab+i)=malloc(m*sizeof(int));
    }
    return tab;
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
int suma(int *tab[],int n,int m)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        s+=tab[i*m+j];
        }
    }
    return s;
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
    int **tab=stworz(2,4);
    wypelnij(tab,2,4);
    wypisz(tab,2,4);
    printf("%i",suma(tab,2,4));
    return 0;
}
