#include <stdio.h>
#include <stdlib.h>
void foo (int n,int tab[])
{
    for(int i=0;i<n;i++)
    {
    if(tab[i]%5==0 && tab[i]%3==0) printf("%i\n",tab[i]);
    }
}
int main()
{
    int tab[]={15,45,9,1,3,90,7};
    foo(7,tab);
    return 0;
}
