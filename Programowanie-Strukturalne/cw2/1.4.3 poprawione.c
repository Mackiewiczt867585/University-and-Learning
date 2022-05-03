#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int h=0,n,m,k,x,i=1;
    printf("Program wczytuje 3 liczby i wypisuje wielokrotnosci n wieksze od m, mniejsze od k \n");
    printf("n=");
    scanf("%i",&n);
    printf("m=");
    scanf("%i", &m);
    printf("k=");
    scanf("%i",&k);
        do
        {
        x=n*i;
        i=i+1;
        if(x<k & x>m)
        {
        printf("%i",x);
        printf("\n");
        h=h+1;
        }
        }while(x<=k);
    if (h==0)
    {
    printf("nie istnieje wielokrotnosc n mniejsza od k i wieksza od m");
    }
    return 0;
}
