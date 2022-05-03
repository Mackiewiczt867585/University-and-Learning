#include <stdio.h>
#include <stdlib.h>
void wytnijz (char *str1,char *str2)
{
    int i,j,g=0;
    for(i=0;str1[i]!=0;i++)
    {
        for(j=0;str2[j]!=0;j++)
        {
            if(str1[i]=str2[j])
            {
            str1[g]=str2[j];
            g++;
            }
        }
    }
    str1[g]=0;
}
int main()
{
    char str1[]="abcd";
    char str2[]="ac";
    printf("%s\n",str1);
    wytnijz(str1,str2);
    printf("%s",str1);
    return 0;
}
