#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element * next;
};
void bezwzgledna(struct element * lista)
{
    do
    {
        if(lista->i<0)
        {
        lista->i=-(lista->i);
        }
        lista=lista->next;
    }while(lista->next!=NULL);
}
int main()
{
    struct element * lista1=malloc(sizeof(struct element));
    lista1->i=4;
    lista1->next=malloc(sizeof(struct element));
    lista1->next->i=-20;
    printf("%i",lista1->next->i);
    bezwzgledna(lista1);
    printf("%i",lista1->next->i);
    return 0;
}
