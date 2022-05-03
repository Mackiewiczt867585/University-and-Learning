#include <stdio.h>
#include <stdlib.h>

void przypisz(const int *a, int *b);

int main()
{
    int x=3,y=6,z=8;
    przypisz(&x,&y);
    printf("%i\n",y);
    przypisz(&z,&y);
    printf("%i\n",y);
    return 0;
}
void przypisz(const int *a, int *b){
    *b=*a;
}
