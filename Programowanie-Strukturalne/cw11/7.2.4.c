#include <stdio.h>
#include <stdlib.h>
struct punkt
{
    float x,y,z;
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
    struct punkt tab1[] = {{1,2,3},{3,2,1},{2,1,3}};
    struct punkt tab2[] = {{4,5,6},{6,5,4},{5,4,6}};
    przepisz(tab1,tab2,3);
    return 0;
}
