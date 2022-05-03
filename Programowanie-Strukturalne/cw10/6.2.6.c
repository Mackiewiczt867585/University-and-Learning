#include <stdio.h>
#include <stdlib.h>
int (*pamiec(int n,int m,int k))[]
{
    return malloc(n*sizeof(int[m][k]));
}
void oczysc(int n,int m,int k,int tab[n][m][k])
{
    free(tab);
}
int main()
{
    int ***tab=pamiec(2,3,4);
    oczysc(tab,2,3,4);
    return 0;
}
