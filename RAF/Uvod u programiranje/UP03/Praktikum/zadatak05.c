#include <stdio.h>
#include <stdlib.h>
//suma svih cifara broja rekurzivno
int sum(int a){
    int d;
    if(a==0) return 0;
    d=a%10;
    return d+sum(a/10);
}

int main(){
    int a,c;
    scanf("%d",&a);
    c=sum(a);
    printf("%d\n", c);
    return 0;
}
