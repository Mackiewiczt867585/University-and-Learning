#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=2,b=4; //a=2 , b=4
a=(a=5)+1; //a=6 , b=4
b=(a+=9)*(b/=1); //a=15 , b=60
return 0;
}
