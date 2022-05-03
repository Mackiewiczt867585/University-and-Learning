#include <stdio.h>
#include <stdlib.h>
int dlugosc (char *string)
{
    int i=0;
    while(string[i]!=0)
    {
    i+=1;
    }
    return i;
}
int dlugosc2 (wchar_t *string)
{
    int i=0;
    while(string[i]!=0)
    {
    i++;
    }
    return i;
}
int main()
{
    char string[]="krotki tekst";
    wchar_t string2[]=L"Bardzo dlugi tekst xxxxxxxxxxxx";
    printf("%d\n",dlugosc(string));
    printf("%d",dlugosc2(string2));
    return 0;
}
