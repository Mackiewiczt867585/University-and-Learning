#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element * next;
};
void dodajk(struct element* lista, int a)
{
    struct element * wsk=lista;
    while(wsk->next!=NULL)
    {
        wsk=wsk->next;
    }
    wsk->next=malloc(sizeof(struct element));
    wsk=wsk->next;
    wsk->i=a;
    wsk->next=NULL;
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
