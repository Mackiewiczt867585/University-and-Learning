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
void wypelnij1(int * tab[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        *(tab+i*m+j)=i+j;
        }
    }
}
void wypelnij2(int * tab[],int n,int m)
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        *(tab+i*m+j)=i-j;
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
void przepisz(int *tab1[],int*tab2[],int n,int m,int x,int y)
{

}
int main()
{
    int **tab1=stworz(2,3);
    int **tab2=stworz(2,3);
    wypelnij1(tab1,2,3);
    wypelnij2(tab2,2,3);
    wypisz(tab1,2,3);
    printf("\n");
    wypisz(tab2,2,3);

    return 0;
}
