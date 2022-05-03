#include <stdio.h>
#include <stdlib.h>
unsigned int fib (unsigned int n)
{
  if(n <= 2) return 1;
  else return fib(n-1)+fib(n-2);
}
int main()
{
    unsigned int n;
    printf("podaj dowolna dodatnia liczbe, ktora bedzie elementem ciagu Fibonacciego:");
    scanf("%i", &n);
    printf("%i",fib(n));
    return 0;
}
