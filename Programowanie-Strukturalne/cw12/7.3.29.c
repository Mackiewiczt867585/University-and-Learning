#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element * next;
};
struct element * kopia(struct element*lista)
{
    struct element * newlist,*temp;
    if(lista==NULL)
    {
        return NULL;
    }
    newlist=malloc(sizeof(struct element));
    temp=newlist;
    temp->i=lista->i;
    lista=lista->next;
    while(lista!=NULL)
    {
        temp->next=malloc(sizeof(struct element));
        temp=temp->next;
        temp->i=lista->i;
        lista=lista->next;
    }
    temp->next=NULL;
    return newlist;
}
int main()
{
    return 0;
}
