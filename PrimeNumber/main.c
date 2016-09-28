#include <stdio.h>
#include <stdlib.h>
//da li je broj prost
int main()
{
    int i,n=0;
    scanf("%d",&n);
    for (i=2;i<=n/2;i++){
        if(n%i==0){
            printf("nije");
        }
        else if(i==n/2){
            printf("jeste");
        }
    }
    return 0;
}