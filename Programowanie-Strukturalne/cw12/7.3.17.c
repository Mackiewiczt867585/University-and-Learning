#include <stdio.h>
#include <stdlib.h>
typedef struct element
{
    int i;
    struct element * next;
}L;
void usun(L*lista,int a)
{
    L *wsk;
    while((lista->next!=NULL)&&(lista->next->i!=a))
    {
        lista=lista->next;
    }
    if(lista->next!=NULL)
    {
        wsk=lista->next;
        lista->next=wsk->next;
        free(wsk);
    }
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
