#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 80
int main(){
    char s[MAX_SIZE],s1[MAX_SIZE];
    if(gets(s)==NULL) return 1;
    if(gets(s1)==NULL) return 1;
    //strcmp poredi dva stringa, vraca 1 ako su razliciti, 0 ako su isti
    if(strcmp(s,s1)){
    //strcat na prvi string dodaje drugi, drugi ne menja
    strcat(s,s1);
    }
    printf("%s\n", s);
    char broj[MAX_SIZE]="1234";
    //atoi(s) pretvara string u broj
    printf("%d\n", atoi(broj));
    return 0;
}
