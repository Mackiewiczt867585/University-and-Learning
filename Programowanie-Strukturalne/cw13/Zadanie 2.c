#include <stdio.h>
#include <stdlib.h>
int length(char *nap)
{
    int i=0;
    while(nap[i]!=NULL)
    {
    i++;
    }
    return i;
}
void foo(char *str1,char *str2)
{
    int dl1=length(str1),dl2=length(str2),i;
    for (i=0;i<dl1;i++)
    {
    str2[dl2+i]=str1[dl1-1-i];
    }
    str2[dl1+i]=NULL;
}
int main()
{
    char str1[50]="12345";
    char str2[50]="09876";
    printf("%s\n",str2);
    foo(str1,str2);
    printf("%s",str2);
    return 0;
}
