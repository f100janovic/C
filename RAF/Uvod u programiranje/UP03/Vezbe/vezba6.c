#include <stdio.h>
#include <stdlib.h>
//NP koji izbacuje razmake iz ulaznog teksta.
//ne znam da li radi
//\0 je null karakter
int main(){
    char c;
    while((c=getchar())!=EOF){
        if (c==' ') c='\0';
    }
    return 0;
}
