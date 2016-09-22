#include <stdio.h>
#include <stdlib.h>
/**
2520 is the smallest number that can be divided by
each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly
divisible by all of the numbers from 1 to 20?
**/
int main()
{
    int i,p,n;
    n=1;
    p=5;
    for (i=1;i<20;n++){
        if (p%i==0){
            i++;
        }
        else{
            p++;
            i=1;
        }
    }
    printf("%d",p);
    return 0;
}
