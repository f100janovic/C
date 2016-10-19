#include <stdio.h>
#include <stdlib.h>
//verovatno nece da radi, u while funkciji koja je u if funkciji treba isto da ima da cita tekst
//NP koji izbacuje sav tekst koji se nalazi u zagradi. Ne postoje ugnježdene zagrade.
//ne znam dal radi
int main(){
    char c;
    while((c=getchar())!=EOF){
        if(c=='('){
            while ((c=getchar())!=')'){
                c='\0';
            }
        }
    }
    return 0;
}
