#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 80
int main(){
    char* str="BAKI";
    //strlen ispisuje duzinu stringa bez \0 karaktera
    printf("%d\n", strlen(str));
    return 0;
}
