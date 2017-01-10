#define MAX_SIZE 80
#include <stdio.h>
#include <string.h>
//pravi novi string koji je str1 nadovezan na str2
int main(){
    char str[MAX_SIZE],str1[MAX_SIZE],str2[MAX_SIZE];
    char* s,*s1,*s2;
    gets(str1);
    gets(str2);
    s1=str1;
    s2=str2;
    s=str;
    strcpy(s,s1);
    strcat(s,s2);
    printf("%s\n", str);
    return 0;
}
