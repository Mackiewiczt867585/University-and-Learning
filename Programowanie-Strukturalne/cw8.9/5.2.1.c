#include <stdio.h>
#include <stdlib.h>
void wyczysc (char string[])
{
    string[0]=NULL;
}
void wyczysc2 (char *string)
{
    string[0]=NULL;
}
void wyczysc3 (wchar_t *string)
{
    string[0]=NULL;
}
int main()
{
    char string[] = "this is fun";
    wchar_t string2[] = L"hehe";

    printf("%s\n",string);
    wyczysc(string);
    printf("%s\n",string);

    wprintf(L"%s\n",string2);
    wyczysc3(string2);
    wprintf(L"%s\n",string2);

    return 0;
}
