#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element * next;
};
struct element * dodajk(struct element* lista, int a)
{
    struct element * wsk;
    if (lista == NULL)
    {
        lista=wsk=malloc(sizeof(struct element));
    }
    else
    {
        wsk=lista;
        while(wsk -> next != NULL)
        {
        wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return lista;
}
int main()
{
    struct element* lista1=malloc(sizeof(struct element));
    lista1 -> i=7;
    lista1 -> next=NULL;
    printf("%i\n",lista1->i);
    dodajk(lista1,5);
    dodajk(lista1,-38);
    printf("%i\n",lista1->next->i);
    printf("%i\n",lista1->next->next->i);
    return 0;
}
