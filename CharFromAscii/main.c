#include <stdio.h>
#include <stdlib.h>
/*
Prints all the characters(and the value) with the ascii value from 0 to 255
*/
int main()
{
    int i;
    for (i=0;i<=255;i++){
        printf("%c %d\n", i, i);
    }
    return 0;
}
