#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 80
void izbaciPraznine(char* s, char* rez){
    //dok ne dodje do NULL karaktera(\o)
    while(*s){
        //ako je trenutni karakter praznina onda ga preskace
        if(*s==' '||*s=='\t') s++;
        //ako nije onda dodaje karakter u  string rez
        else *rez++=*s++;
    }
    //dodaje NULL karakter da bi oznacio kraj stringa
    *rez='\0';
}
int main(){
    char rez[MAX_SIZE],str[MAX_SIZE];
    //ucitava string
    if(gets(str)==NULL) return 1;
    izbaciPraznine(str,rez);
    printf("%s\n",rez);
    return 0;
}
