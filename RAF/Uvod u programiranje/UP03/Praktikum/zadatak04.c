#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int prost(int a){
int i;
for (i=2;i<a/2;i++){
    if(a%i==0) return 0; break;
    if(i==a/2) return 1;
}
}

int faktorijel(int a){
while(a-1){
    int k;
    k=a*faktorijel(a-1);
    return k;
}
}
int main()
{
    int i,a;
    i=-1;
    scanf("%d", &a);
    while(a){
        scanf("%d", &a);
        if(prost(a)){
            if(a>i) i=a;
        }
    }
    printf("%d\n", i);
    printf("%d\n", faktorijel(i));
	return 0;
}
