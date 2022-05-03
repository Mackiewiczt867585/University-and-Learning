#include <stdio.h>
#include <stdlib.h>
void cut (char *str, int n,int m)
{
    int i,g=0;
    for(i=n;i<=m&&str[i]!=0;i++)
    {
    str[g]=str[i];
    g++;
    }
    str[g]=0;
}
void cut2 (wchar_t *str,int n,int m)
{
    int i,g=0;
    for(i=n;i<=m&&str[i]!=0;i++)
    {
    str[g]=str[i];
    g++;
    }
    str[g]=0;
}
int main()
{
    char str1[]="abcd";
    cut(str1,2,3);
    printf("%s\n",str1);

    wchar_t str2[]=L"dcba";
    cut2(str2,2,3);
    wprintf(L"%s",str2);

    return 0;
}
