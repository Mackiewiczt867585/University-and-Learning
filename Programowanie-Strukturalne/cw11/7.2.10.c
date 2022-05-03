#include <stdio.h>
#include <stdlib.h>
union super_int
{
    int a;
    unsigned int b;
};
int main()
{
    union super_int x;
    x.a=-4;
    x.b=4;
    printf("%i",x.a);
    return 0;
}
