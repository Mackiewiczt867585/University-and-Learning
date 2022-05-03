#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    unsigned int i,n,s=0;
    printf("program liczy sume n kwadratow dowolnej liczby calkowitej.\n");
    printf("n=");
    scanf("%i",&n);
    for(i=0;i<=n;i++)
    {
    s=s+pow(i,2);
    }
    printf("suma tych kwadratow wynosi:");
    printf("%i",s);
    return 0;
}
