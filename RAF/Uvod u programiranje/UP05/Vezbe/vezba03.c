#include <stdio.h>
//Napisati unetu reč unazad ali izostaviti samoglasnike
void rec(){
    int ch=getchar();
    if (ch!='\n') {putchar(ch); rec();}
    putchar(ch);
}
int main(){
    rec();
    return 0;
}
