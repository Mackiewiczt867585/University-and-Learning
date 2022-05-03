#include <stdio.h>
#include <stdlib.h>
void wypisz (int n,int tab[])
{
    for(int i=0;i<n;i++)
    {
    printf("%d,",tab[i]);
    }
}
void a (unsigned int n,int * tab[])
{
    int x;
        for(int i=0;i<n/2;i++)
        {
        x=tab[i];
        tab[i]=tab[n-1-i];
        tab[n-1-i]=x;
        }
}
void b (unsigned int n,int * tab[])
{
    int x;
    for(int i=1;i<n;i++)
    {
    x=tab[n-1];
    tab[n-1]=tab[n-1-i];
    tab[n-1-i]=x;
    }
}
void c (unsigned int n,int * tab[])
{
    int x;
    for(int i=1;i<n;i++)
    {
    x=tab[0];
    tab[0]=tab[i];
    tab[i]=x;
    }
}
void d (unsigned int n,int *tab[])
{
    int x,y,najm;
    for(int i=0;i<n;i++)
    {
    x=tab[i];
    y=i;
        najm=tab[i];
        for(int j=i;j<n;j++)
        {
        if(najm>tab[j])
        {
        najm=tab[j];
        y=j;
        }
        }
    tab[i]=tab[y];
    tab[y]=x;
    }
}
void e (unsigned int n,int *tab[])
{
    int x,y,najw;
    for(int i=0;i<n;i++)
    {
    x=tab[i];
    y=i;
        najw=tab[i];
        for (int j=i;j<n;j++)
        {
        if(najw<tab[j])
        {
        najw=tab[j];
        y=j;
        }
        }
    tab[i]=tab[y];
    tab[y]=x;
    }
}
int main()
{
    int tab[]={1,2,3,4};
    wypisz(4,tab);
    printf("\n");

    a(4,tab);
    wypisz(4,tab);
    printf("\n");

    int tab2[]={1,2,3,4};
    b(4,tab2);
    wypisz(4,tab2);
    printf("\n");

    int tab3[]={1,2,3,4};
    c(4,tab3);
    wypisz(4,tab3);
    printf("\n");

    int tab4[]={2,3,1,0};
    d(4,tab4);
    wypisz(4,tab4);
    printf("\n");

    int tab5[]={2,3,0,1};
    e(4,tab5);
    wypisz(4,tab5);
    printf("\n");

    return 0;
}
