#include <stdio.h>
#include <stdlib.h>
void wypisz (float tab[][2],int n,int m)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
        printf("[%i][%i]=%f\n",i,j,tab[i][j]);
        }
    }
}
void foo(float tab1[][2],float tab2[][2],float tab3[][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
        tab3[i][j]=tab1[i][j] * tab2[i][j];
        }
    }
}
int main()
{
    float tab1[2][2]={{1,2},{3,4}};
    float tab2[2][2]={{0,1},{3,2}};
    float tab3[2][2]={{0,0},{0,0}};
    wypisz(tab1,2,2);
    printf("\n");
    wypisz(tab2,2,2);
    printf("\n");
    wypisz(tab3,2,2);
    printf("\n");
    foo(&tab1,&tab2,&tab3);
    wypisz(tab1,2,2);
    printf("\n");
    wypisz(tab2,2,2);
    printf("\n");
    wypisz(tab3,2,2);
    printf("\n");


    return 0;
}
