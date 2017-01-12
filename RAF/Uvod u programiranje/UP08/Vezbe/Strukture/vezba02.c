#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char ime[25];
    char prezime[25];
    unsigned godine;
} osoba;
void ucitaj(osoba* o){
    gets(o->ime); gets(o->prezime); scanf("%d",&o->godine);
    fflush(stdin);
}
int main(){
    osoba osoba1,osoba2,starija;
    ucitaj(&osoba1); ucitaj(&osoba2);
    if(osoba1.godine > osoba2.godine) starija=osoba1;
    else starija=osoba2;
    printf("%s\n%s\n%d\n",starija.ime,starija.prezime,starija.godine);
    return 0;
}
