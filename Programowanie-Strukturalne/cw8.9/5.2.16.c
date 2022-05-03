#include <stdio.h>
#include <stdlib.h>
void wczytaj(char *str)
{
    printf("Podaj dowolny tekst:\n");
    scanf("%s",str);
}
void wczytaj2(wchar_t *str)
{
    printf("Podaj dowolny tekst:\n");
    wscanf(L"%s",str);
}
int main()
{
    char s[]="";
    wchar_t s2[]=L"";
    wczytaj(s);
    wczytaj2(s2);
    printf("%s\n",s);
    wprintf(L"%s",s2);
    return 0;
}
