#include <stdio.h>
#include <stdlib.h>
struct trojkat
{
    float a;
    float b;
    float c;
};
float obw (struct trojkat tr)
{
    return tr.a+tr.b+tr.c;
}
int main()
{
    struct trojkat tk;
    tk.a=3.7;
    tk.b=5.1;
    tk.c=2.2;
    printf("%f",obw(tk));
    return 0;
}
