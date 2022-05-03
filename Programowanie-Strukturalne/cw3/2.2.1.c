#include <stdio.h>
#include <stdlib.h>
int bezw (int a)
{
    if (a>=0)   return a;
        return -a;

}
int main()
{
    int a;
    printf("Podaj dowolna liczbe:\n");
    scanf("%d", &a);
    printf("%d",bezw(a));
    return 0;
}
