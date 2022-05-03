#include <stdio.h>
#include <stdlib.h>
void wypisz (int n,int tab[])
{
    for(int i=0;i<n;i++)
    {
    printf("%d,",tab[i]);
    }
}
void a (int n,int tab1[],int tab2[],int * tab3[])
{
    for(int i=0;i<n;i++)
    {
    tab3[i]=tab1[i]+tab2[i];
    }
}
void b (int n,int tab1[],int tab2[],int * tab3[])
{
    for (int i=0;i<n;i++)
    {
        if(tab1[i]>tab2[i]) tab3[i]=tab1[i];
        if(tab1[i]<tab2[i]) tab3[i]=tab2[i];
    }
}
void c (int n,int * tab1[],int * tab2[],int * tab3[])
{
    int x;
    for(int i=0;i<n;i++)
    {
        x=tab3[i];
        tab3[i]=tab2[i];
        tab2[i]=tab1[i];
        tab1[i]=x;
    }
}
int main()
{
    int tab1[]={3,2};
    int tab2[]={1,4};
    int tab3[]={5,6};
    a(2,tab1,tab2,tab3);
    wypisz(2,tab3); //tab3[]={4,6}
    printf("\n");

    b(2,tab1,tab2,tab3);
    wypisz(2,tab3); //tab3[]={3,4}
    printf("\n");
    printf("\n");

    c(2,tab1,tab2,tab3);
    wypisz(2,tab1);
    printf("\n");
    wypisz(2,tab2);
    printf("\n");
    wypisz(2,tab3);
    printf("\n");
    return 0;
}
