#include <stdio.h>
//rec unazad

void tekst(){
    int ch=getchar();
    if(ch!='\n') tekst();
    putchar(ch);
}

int main(){
tekst();
return 0;
}
