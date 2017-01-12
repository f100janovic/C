#include <stdio.h>
#include <stdlib.h>
//definise strukturu i njene promenljive
struct osoba{
    char ime[25];
    char prezime[25];
    unsigned godine;
};
int main(){
    //deklaracija promenljivih struktura
    struct osoba osoba1,osoba2,starija;
    //popunjavanje strukture
    gets(osoba1.ime);gets(osoba1.prezime);scanf("%d",&osoba1.godine);
    fflush(stdin);
    gets(osoba2.ime);gets(osoba2.prezime);scanf("%d",&osoba2.godine);
    if(osoba1.godine>osoba2.godine) starija=osoba1;
    else starija=osoba2;
    printf("%s\n%s\n%d\n", starija.ime,starija.prezime,starija.godine);
    return 0;
}
