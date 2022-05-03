#include <stdio.h>
#include <stdlib.h>
int a (unsigned int n,int tab[])
{
    int najw=tab[0];
    for (int i=1;i<n;i++)
    {
    if(tab[i]>najw) najw=tab[i];
    }
    return najw;
}
int b (unsigned int n,int tab[])
{
    int najm=tab[0];
    for(int i=1;i<n;i++)
    {
    if(tab[i]<najm) najm=tab[i];
    }
    return najm;
}
int c (unsigned int n,int tab[])
{
    int ind=0,najw=tab[0];
    for(int i=1;i<n;i++)
    {
        if(tab[i]>najw)
        {
        najw=tab[i];
        ind=i;
        }
    }
    return ind;
}
int d (unsigned int n,int tab[])
{
    int ind=0,najm=tab[0];
    for(int i=1;i<n;i++)
    {
        if(tab[i]<najm)
        {
        najm=tab[i];
        ind=i;
        }
    }
    return ind;
}
int e (unsigned int n,int tab[])
{
    int najw=0,abs;
    for (int i=0;i<n;i++)
    {
        if(tab[i]>0)
        {
            if(najw<tab[i]) najw=tab[i];
        }
        else if (tab[i]<0)
        {
        abs=tab[i]*-1;
            if(abs>najw) najw=abs;
        }
    }
    return najw;
}
int f (unsigned int n,int tab[])
{
    int najw=0,abs,ind=0;
    for (int i=0;i<n;i++)
    {
        if(tab[i]>0)
        {
            if(najw<tab[i])
            {
            najw=tab[i];
            ind=i;
            }
        }
        else if (tab[i]<0)
        {
        abs=tab[i]*-1;
            if(abs>najw)
            {
            najw=abs;
            ind=i;
            }
        }
    }
    return ind;
}
int main()
{
    int tab[]={-4,3,6};
    printf("%i\n",a(3,tab));
    printf("%i\n",b(3,tab));
    printf("%i\n",c(3,tab));
    printf("%i\n",d(3,tab));
    printf("%i\n",e(3,tab));
    printf("%i\n",f(3,tab));
    return 0;
}
