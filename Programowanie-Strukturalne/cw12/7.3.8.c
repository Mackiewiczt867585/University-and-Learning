#include <stdio.h>
#include <stdlib.h>
typedef struct lista
{
    int i;
    struct lista * next;
}LISTA;
LISTA* usunw(LISTA*lista,LISTA*element)
{
    LISTA *wsk,*wsk2;
    if(lista=NULL)
    {
        return lista;
    }
    wsk=lista;
    if(lista==element)
    {
        lista=lista->next;
        free(wsk);
        return lista;
    }
    while((wsk->next!=NULL)&&(wsk->next!=element))
    {
        wsk=wsk->next;
    }
    if(wsk->next!=NULL)
    {
        wsk2=wsk->next;
        wsk->next=wsk2->next;
        free(wsk2);
    }
    return lista;
}
int main()
{

    return 0;
}
