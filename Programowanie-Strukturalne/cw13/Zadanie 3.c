#include <stdio.h>
#include <stdlib.h>
struct element
{
    double x;
    struct element * next;
};
int porownaj(struct element * lista1,struct element * lista2)
{
    float suma1=0;
    float suma2=0;
    while(lista1->next!=NULL)
    {
    lista1=lista1->next;
    suma1+=lista1->x;
    }
    while(lista2->next!=NULL)
    {
    lista2=lista2->next;
    suma2+=lista2->x;
    }
    if(suma1==suma2) return 1;
    else return 0;
}
int main()
{
    struct element* lista = malloc(sizeof(struct element));
     struct element* L = malloc(sizeof(struct element));
     lista->next=L->next= NULL;

     struct element * wsk = malloc(sizeof(struct element));
     wsk->x = 1;
     wsk->next=lista->next;
     lista->next=L->next=wsk;

     struct element * wsk2 = malloc(sizeof(struct element));
     wsk2->x = 2;
     wsk2->next=lista->next;
     lista->next=L->next=wsk2;

     struct element* wsk3 = malloc(sizeof(struct element));
     wsk3->x = 3;
     wsk3->next=lista->next;
     lista->next=L->next=wsk3;

     struct element * wsk4 = malloc(sizeof(struct element));
     wsk4->x = 4;
     wsk4->next=lista->next;
     lista->next=wsk4;

     struct element * wsk5 = malloc(sizeof(struct element));
     wsk5->x = 5;
     wsk5->next=L->next;
     L->next = wsk5;

     printf("%i",porownaj(lista,L));
    return 0;
}
