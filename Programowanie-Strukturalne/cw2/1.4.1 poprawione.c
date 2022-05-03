#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x,i=1,n,m;
    printf("program wypisuje wielokrotnosci n mniejsze od m.\n");
    printf("podaj 2 dodatnie liczby n i m:\n");
    printf("n=");
    scanf("%i", &n);
    printf("m=");
    scanf("%i", &m);
    if(n<m)
    {
        do
        {
        x=n*i;
        i=i+1;
        if(x<m)
        {
        printf("%i",x);
        printf("\n");
        }
    }while(x<m);
    }
    else
    {
    printf("nie istnieje wielokrotnosc n mniejsza od m");
    }
return 0;
}

