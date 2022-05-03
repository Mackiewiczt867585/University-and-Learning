#include <stdio.h>
#include <stdlib.h>
void zlicz()
{
    static unsigned int liczba=0;
        liczba++;
    printf("funkcja zostala wywolana %i razy\n", liczba);
}
int main()
{
    zlicz();
    zlicz();
    zlicz();
    zlicz();
    zlicz();
    zlicz();
    zlicz();
    zlicz();
    zlicz();
    zlicz();
    zlicz();
    zlicz();
    return 0;
}
