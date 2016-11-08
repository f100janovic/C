#include <stdio.h>
#include <stdlib.h>
/*NP koji ispisuje uneti tekst tako da ne ispisuje zagrade i ono što je u
zagradama.*/
int main(){
    char ch;
    while(ch=getchar()!='\n'){
        if(ch='('){
            while(ch=getchar()!=')'){
                putchar('0');
            }
        }
        putchar(ch);

    }
    return 0;
}
