#include <stdio.h>
#include <stdlib.h>
struct student
{
    char imie[25];
    char nazwisko[25];
    char adres[50];
    char pesel[11];
    char kierunek[25];
    char nr_legit[12];
};
void wypelnij (struct student *s)
{
    printf("podaj imie:");
    scanf("%s",s->imie);
    printf("podaj nazwisko:");
    scanf("%s",s->nazwisko);
    printf("podaj adres:");
    scanf("%s",s->adres);
    printf("podaj pesel:");
    scanf("%i",s->pesel);
    printf("podaj kierunek:");
    scanf("%s",s->kierunek);
    printf("podaj numer legitymacjii:");
    scanf("%i",s->nr_legit);
}
int main()
{
    struct student student1={};
    struct student *p = &student1;
    wypelnij(p);
    return 0;
}
