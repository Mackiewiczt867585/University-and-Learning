#include <stdio.h>
#include <stdlib.h>
void przepisz (char *str1, char *str2)
{
    int i;
    for(i=0;str1[i]!=0;i++)
    {
    str2[i]=str1[i];
    }
    str2[i]=0;
}
void przepisz2(wchar_t *str1, wchar_t *str2)
{
    int i;
    for(i=0;str1[i]!=0;i++)
    {
    str2[i]=str1[i];
    }
    str2[i]=0;
}
int main()
{
    char str1[]="napis";
    char str2[]="xddddddd";
    printf("%s\n",str2);
    przepisz(str1,str2);
    printf("%s\n",str2);

    wchar_t string1[]=L"napis";
    wchar_t string2[]=L"hehe";
    wprintf(L"%s\n",string2);
    przepisz2(string1,string2);
    wprintf(L"%s\n",string2);

    return 0;
}
