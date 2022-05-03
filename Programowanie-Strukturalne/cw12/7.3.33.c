#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element * next;
};
void foo (struct element * lista)
{
    if (lista->next!=NULL)
    {
        if(lista->next->next!=NULL)
        {
            struct element * temp=lista->next;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            struct element * last=temp->next;
            temp->next=NULL;
            last->next=lista->next;
            lista->next=last;
        }
    }
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
