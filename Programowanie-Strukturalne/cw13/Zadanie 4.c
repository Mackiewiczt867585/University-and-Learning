#include <stdio.h>
#include <stdlib.h>
void fun(char *sciezka,int **tab,int n,int m)
{
    sciezka="g";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        *(tab+i*n+j)=0;
        }
    }
}
int main()
{
    char str[50]="x";
    int n=2,m=3;
    int tab[2][3];
    tab[1][2]=3;
    printf("tab[1][2]=%i,n=%i,m=%i,%s\n",tab[1][2],n,m,str);
    fun(str,tab,n,m);
    printf("tab[1][2]=%i,n=%i,m=%i,%s\n",tab[1][2],n,m,str);

    return 0;
}
