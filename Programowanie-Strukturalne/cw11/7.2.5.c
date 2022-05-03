#include <stdio.h>
#include <stdlib.h>
struct punkt
{
    float a,b,c,d,e,f,g,h,i,j;
};

void przepisz(struct punkt tab[],struct punkt tab2[],int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i]=tab[i];
    }
}

int main()
{
    struct punkt tab1[] = {{1,2,3,4,5,6,7,8,9,10},{10,9,8,7,6,5,4,3,0,1}};
    struct punkt tab2[] = {{5,4,3,5,2,3,5,1,12,3},{54,43,12,-1,234,32,43,1,234,4}};
    przepisz(tab1,tab2 ,2);
    return 0;
}
