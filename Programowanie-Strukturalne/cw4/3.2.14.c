#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool foo(int (*fun1)(int a),int (*fun2)(int a),unsigned int n)
{
    for (int i=0;i<=n;i++)
    {
    if (fun1(i)!=fun2(i)) return false;
    }
    return true;
}
int f1 (int a)
{
    return a;
}
int f2 (int a)
{
    return a*a;
}
int main()
{
    int n=2;
    printf("%i",foo(&f1,&f2,n));
    return 0;
}
