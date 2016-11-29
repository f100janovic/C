#include <stdio.h>
#include <stdlib.h>
/*
n=7
AB#AB#A
CD#CD#C
#######
AB#AB#A
CD#CD#C
#######
AB#AB#A
*/

int main(){
    int i,n,j;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        switch(i%3){
        case 0:
            for(j=0;j<n;j++){
               switch(j%3){
               case 0:
                   putchar('A');
                   break;
               case 1:
                   putchar('B');
                   break;
               case 2:
                putchar('*');
                break;
               }
            }
            break;
        case 1:
                for(j=0;j<n;j++){
               switch(j%3){
               case 0:
                   putchar('C');
                   break;
               case 1:
                   putchar('D');
                   break;
               case 2:
                putchar('*');
                break;
               }
            }
            break;
        case 2:
                for(j=0;j<n;j++){
                    putchar('*');
                }
                break;
        }
        putchar('\n');
    }
    return 0;
}
