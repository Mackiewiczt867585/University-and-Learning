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
void wypelnij(int * tab[],int n,int m)
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
void przesun(int *tab[],int n,int m)
{
    int **temp=stworz(n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        *(temp+i*m+j)=*(tab+i*m+j);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i+1<n)
            {
            *(tab+(i+1)*m+j)=*(temp+i*m+j);
            }
            else
            {
            *(tab+j)=*(temp+i*m+j);
            }
        }
    }
    free(temp);
}
int main()
{
    int **tab=stworz(3,3);
    wypelnij(tab,3,3);
    wypisz(tab,3,3);
    printf("\n");
    przesun(tab,3,3);
    wypisz(tab,3,3);
    return 0;
}
