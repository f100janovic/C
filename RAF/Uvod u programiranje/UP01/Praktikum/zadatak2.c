#include <stdio.h>
#include <stdlib.h>
//Zadatak: Ispisati slovo K udaljeno od unetog
int main()
{
    char slovo;
    int k;
    //unos broja pomeraja i slova
    scanf("%d %c", &k, &slovo);
    /*buduci da engleska abeceda ima 26 karaktera, 
    radimo modulo broja k sa 26 da bi dobili manji broj*/
    k=k%26;
    /*ako slovo + broj pomeraja daju ascii vrednos vecu od slova z
    onda ispisuje novo slovo prema formuli 'z'-slovo+1,
    tj. posmatra listu od kraja*/
    if (slovo + k > 'z'){
        printf("%c", 'a'+k-('z'-slovo+1));
    }
    //a ako nije, onda prosto ispisuje slovo k pomereno od unetog
    else{
        printf("%c", slovo+k);
    }
    return 0;
}