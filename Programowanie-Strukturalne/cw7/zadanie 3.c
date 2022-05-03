#include <stdio.h>
#include <stdlib.h>
void foo (int * a,int * b)
{
    if(*a>*b) *b=*a;
    if(*b>*a) *a=*b;
}
int main()
{
    int a=1,b=2,c=6,d=4;
    foo(&a,&b);
    foo(&d,&c);
    printf("%i %i\n",a,b);
    printf("%i %i",c,d);
    return 0;
}
