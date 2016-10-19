#include <stdio.h>
#include <stdlib.h>
//ne radi
//NP koji ispisuje srednju vrednost unetih prirodnih brojeva. Kraj je kada korisnik unese 0.
int main()
{
    int s,i,n;
    n=0;
    s=0;
    while((i=getchar())!='0'){
        s=s+i;
        n++;
    }
    fflush(stdout);
    printf("%d\n",s/n);
    return 0;
}
