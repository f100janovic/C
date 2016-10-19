#include <stdio.h>
#include <stdlib.h>
//ne radi
//NP koji određuje najveći broj od prirodnih brojeva koje unosi korisnik. Kraj je kada korisnik unese 0.
int main(){
    int i,m;
    m=0;
    while((i=getchar())!='0'){
        if(i>m){
            m=i;
        }
    }
    printf("%d\n", m);
    return 0;
}
