#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,n; 
    scanf("%d",&n);
    if (n>=2 && n<=20){
        for (i=1;i<=10;i++){
            printf("%d x %d = %d\n", n,i,n*i);
        }
    }
    return 0;
}