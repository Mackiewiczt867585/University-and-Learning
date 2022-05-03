#include <stdio.h>
#include <stdlib.h>
int foo (int n,int tab1[],int tab2[])
{
    int najw1=tab1[0],najw2=tab2[0],t1=0,t2=0;
    for (int i=1;i<n;i++)
    {
        if(tab1[i]>najw1)
        {
        najw1=tab1[i];
        t1=i;
        }
        if(tab2[i]>najw2)
        {
        najw2=tab2[i];
        t2=i;
        }
    }
    if(t1==t2) return 1;
    return 0;
}
int main()
{
    int tab1[]={3,2,1,7,6};
    int tab2[]={0,0,1,0,0};
    printf("%i",foo(5,tab1,tab2));
    return 0;
}
