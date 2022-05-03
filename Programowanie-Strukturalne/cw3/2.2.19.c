#include <stdio.h>
#include <stdlib.h>
void xd ()
{
    int n;
    static int suma=0;
    printf("podaj dowolna liczbe:");
    scanf("%i", &n);
    printf("\n");
    suma+=n;
    printf("suma tych liczb = %i", suma);
    printf("\n");
}
int main()
{
    xd();
    xd();
    xd();

}
