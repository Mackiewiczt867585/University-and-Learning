#include <stdio.h>
#include <stdlib.h>
char godzina (int g,int m,int s)
{
    char godz[]="";
    char min[]="";
    char sek[]="";
    char time[]="";
    itoa(g,godz,2);
    itoa(m,min,2);
    itoa(s,sek,2);
    int i;
    for(i=0;godz[i]!=0;i++)
    {
    time[i]=godz[i];
    }
    time[i]=":";
    i++;
    int k=i;
    for(i=i;min[i-k]!=0;i++)
    {
    time[i]=min[i-k];
    }
    time[i]=":";
    i++;
    k=i;
    for(i=i;sek[i-k]!=0;i++)
    {
    time[i]=sek[i-k];
    }
    return time;
}
int main()
{
    int g=12,m=45,s=13;
    printf("%s",godzina(g,m,s));
    return 0;
}
