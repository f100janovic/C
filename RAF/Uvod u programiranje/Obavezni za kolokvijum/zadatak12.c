#include <stdio.h>
#include <stdlib.h>
//NP koji ispisuje uneti tekst tako da svaka reč počinje velikim slovom
int main(){
    int ch;
    while((ch=getchar())!='\n'){
        if(ch==' '){
            putchar(ch);
            ch=getchar();
            if((ch>96)&&(ch<123)){
                ch=ch-32;
            }
        }
        putchar(ch);
    }
    return 0;
}
