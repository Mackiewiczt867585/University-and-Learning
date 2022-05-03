#include <stdio.h>
#include <stdlib.h>
struct trojkat
{
    float a;
    float b;
    float c;
};
void swap (struct trojkat troj1, struct trojkat *troj2)
{
    *troj2=troj1;
}
int main()
{
    struct trojkat tk;
    tk.a=3.7;
    tk.b=5.1;
    tk.c=2.2;
    struct trojkat tk2;
    tk2.a=1;
    tk2.b=1;
    tk2.c=1;
    printf("%f %f %f\n",tk.a,tk.b,tk.c);
    printf("%f %f %f\n",tk2.a,tk2.b,tk2.c);
    swap(tk,&tk2);
    printf("%f %f %f",tk2.a,tk2.b,tk2.c);
    return 0;
}
