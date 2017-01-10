#include <stdio.h>
#include <stdlib.h>
int main(){
    //definise max duzinu stringa
    #define MAX_SIZE 100
    //deklaracija stringa
    char string[MAX_SIZE];
    //ucitava string
    scanf("%s", string);
    char* pok = string;
    //ispisuje string
    while(*pok)
        putchar(*pok++);
    putchar('\n');
    //ispisuje string unazad
    while(--pok>=string)
        putchar(*pok);
    return 0;
}
