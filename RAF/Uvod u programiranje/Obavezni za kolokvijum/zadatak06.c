#include <stdio.h>
#include <stdlib.h>
/*Ispisati zbir svih prirodnih brojeva od 1 do 100*/
int main(){
    int i,s=0;
    for(i=1;i<=100;i++){
        s+=i;
    }
    printf("%d\n", s);
    return 0;
}
