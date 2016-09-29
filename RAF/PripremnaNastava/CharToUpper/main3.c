#include <stdio.h>
#include <stdlib.h>
/* ceka input dok ne unesem enter i onda sve manje pretvara u
velike ili obrnuto*/

int main()
{
    char c;
    //upisuju se brojevi dok c nije ENTER
    while ((c=getchar())!='\n'){
    	/*poredjuje vrednost sa ASCII tabelom 
    	i ako je slovo malo onda prebacuje 
    	u veliko i obrnuto*/
        if (c>64 && c<91){
            c=c+32;
 	    }
        else if (c>96 && c<123){
 		    c=c-32;
 	    }
        putchar(c);
}
    return 0;
}
