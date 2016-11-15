#include <stdio.h>
#include <stdlib.h>
/*Ispisati najveći mogući zbir pridodnih brojeva S=1+2+3+4+5+... takav da
je S>100*/
int main(){
    int i,s=0;
    while(s<100){
        s+=i;
        i++;
    }
    printf("%d\n", s);
    return 0;
}
