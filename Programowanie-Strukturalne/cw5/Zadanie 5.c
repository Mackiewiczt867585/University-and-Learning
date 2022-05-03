#include <stdio.h>
#include <stdlib.h>
int main()
{
int a=0,b=1,c=2,d=4; //a=0 , b=1 , c=2 , d=4
b= (c=3)*4; //a=0 , b=12 , c=3 , d=4
c=(a+b)+(--c); //a=0 , b=12 , c=14 , d=4
d=c*(a+=-3)+6; //a=-3 , b=12 , c=14 , d=-36
return 0;
}
