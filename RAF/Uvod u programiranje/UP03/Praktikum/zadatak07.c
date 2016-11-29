#include <stdio.h>
//rec unazad bez samoglasnika

void tekst(){
    int ch=getchar();
    if(ch!='\n') tekst();
    if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')putchar(ch);
}

int main(){
tekst();
return 0;
}
