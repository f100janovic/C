#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 80
int brojPojavljivanja(char* s, char *s1){
    int br=0;
    //strstr vraca pokazivac na prvi znak u str1 pocev od koga je str2 sadrzan
    while(strstr(s,s1)!=NULL){
        br++;
        s=strstr(s,s1)+strlen(s1);
    }
    return br;
}
int main(){
    char s[MAX_SIZE],s1[MAX_SIZE];
    scanf("%s %s",s,s1);
    //if(gets(s)==NULL) return 1;
    //if(gets(s1)==NULL) return 1;
    printf("%d\n", brojPojavljivanja(s,s1));
    return 0;
}
