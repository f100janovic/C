#include <stdio.h>
#include <stdlib.h>
/*Napisati program koji nalazi najveci NZD za dva uzastopna uneta broja.
 Brojevi se unose dok se ne unese 0
 12 32 45 18 0 -> 9*/
 int provera(int n,int x){
    int prev=0,d;
    while(n){
        d=n%10;
        n/=10;
        if(d*prev>=x){
            return 0;
        }
        prev=d;
    }
 }
int main(){
    int i,n,k,a,cnt=0;
    scanf("%d %d", &n,&k);
    for(i=1;i<=n;i++){
        scanf("%d", &a);
        if(provera(a,k)) cnt++;
    }
    printf("%d", cnt);
    return 0;
}
