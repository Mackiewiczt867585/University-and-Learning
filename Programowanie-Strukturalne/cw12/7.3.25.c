#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element * next;
};
float min(struct element*lista)
{
    float m;
    m=lista->i;
    lista=lista->next;
    while(lista->next!=NULL)
    {
        if(lista->i<m) m=lista->i;
        lista=lista->next;
    }
    return m;
}
int main()
{
    struct element * lista1=malloc(sizeof(struct element));
    lista1->i=4;
    lista1->next=malloc(sizeof(struct element));
    lista1->next->i=3;
    printf("%f",min(lista1));
    return 0;
}
