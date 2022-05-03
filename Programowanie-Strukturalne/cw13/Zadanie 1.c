#include <stdio.h>
#include <stdlib.h>

int main()
{
    char wyraz[]="informatyka";
    char* p= wyraz; // p= eeb
    int a = sizeof(char); // a= 1
    p = wyraz+5; // p=ef0  , *p=109'm'
    char w = *wyraz+5; //w=110'n'  , &w =ef7
    w= *(wyraz+5); //w=109'm'  , &w =ef7
    *p = (wyraz+8)[-2]; // p=ef0  , *p=97'a'
    return 0;
}
