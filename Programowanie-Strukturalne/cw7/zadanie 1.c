#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[] = {1, -1, 5, 5, 5, 8, 7};
    int *wsk=tab;
    int b = *(wsk+=4); //b=5
    int c = b+2; // b=5  , c=7
    int d = (b/=-6) ^ (c-=-17); // b=0  , c=24  , d=24
    int e = (wsk+=-1)[2]; // b=0  , c=24  , d=24  , e=8
    e = (d *= 8) + (c /= 3); // b=0  , c=8  , d=192  , e=200
    c = d - (b+=8); // b=8  , c=184  , d=192  , e=200
    b = *wsk + e; // b=205  , c=184  , d=192  , e=200
    d = b * c / e; // b=205  , c=184  , d=188  , e=200
    return 0;
}
