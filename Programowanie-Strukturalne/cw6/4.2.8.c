#include <stdio.h>
#include <stdlib.h>
void wypisz (int n,int tab[])
{
    for(int i=0;i<n;i++)
    {
    printf("%d,",tab[i]);
    }
}
void a (int n, int *tab1[],int *tab2[],int *tab3[])
{
    for(int i=0;i<2*n;i++)
    {
        if(i<n)
        {
        tab3[i]=tab1[i];
        }
        else
        {
        tab3[i]=tab2[i-n];
        }
    }
}
void b (int n, int *tab1[],int *tab2[],int *tab3[])
{
    for (int i=0;i<2*n;i++)
    {
        if(i%2==0)
        {
            if(i<n)
            {
            tab3[i]=tab2[i];
            }
            else
            {
            tab3[i]=tab2[i-n];
            }
        }
        else
        {
            if(i<n)
            {
            tab3[i]=tab1[i];
            }
            else
            {
            tab3[i]=tab1[i-n];
            }
        }
    }
}
int main()
{
    int tab1[] = {1,2};
    int tab2[] = {3,4};
    int tab3[] = {5,6,7,8};
    a(2,tab1,tab2,tab3);
    wypisz(4,tab3);
    printf("\n");
    b(2,tab1,tab2,tab3);
    wypisz(4,tab3);
    printf("\n");
    return 0;
}
