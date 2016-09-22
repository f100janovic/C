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
    int i,p;
    p=5;
    while(i<20){
    for (i=1;i<20;i++){
        if (p%i==0){

        }
        else{
            p++;
        }
    }
    }
    printf("%d",p);
    return 0;
}
