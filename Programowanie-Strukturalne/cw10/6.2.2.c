#include <stdio.h>
#include <stdlib.h>
void wypisz (int *tab[],int n,int m)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
        printf("[%d][%d]=%d\n",i,j,*(tab+i*m+j));
        printf("%p\n",tab+i*m+j);
        }
    }
}
int (*foo(int n,int m))[]
{
    return malloc(n*sizeof(int[m]));
}
int main()
{
    int **tab = (int**) foo(3,4);
    *tab=7;
    *(tab+1)=20;
    *(tab+5)=4;
    wypisz(tab,3,4);
    return 0;
}
