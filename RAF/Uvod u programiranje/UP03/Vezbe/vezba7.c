#include <stdio.h>
#include <stdlib.h>
//NP koji izbacuje samoglasnike iz ulaznog teksta.
int main(){
    char c;
    while((c=getchar())!=EOF){
        if (c=='a'||c=='A'||c=='e'||c=='e'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U') c='\0';
    }
    return 0;
}
