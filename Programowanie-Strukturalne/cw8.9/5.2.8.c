#include <stdio.h>
#include <stdlib.h>
void powieksz (char *string)
{
    int i;
    for(i=0;string[i]!=0;i++)
    {
        if(string[i]>='a' && string[i]<='z')
        {
        string[i]=string[i]-32;
        }
    }
}
int main()
{
    char str[]="abcd";
    printf("%s\n",str);
    powieksz(str);
    printf("%s",str);
    return 0;
}
