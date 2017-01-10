#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 80
void sort_str(char* niz[], int n){
    int i,j;
    for(i=1;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(strcmpi(niz[i],niz[j])>0){
                char* tmp=niz[i];
                niz[i]=niz[j];
                niz[j]=tmp;
            }
}
int main(int argc, char *argv[]){
	int i;
	sort_str(argv,argc);
	for(i=1;i<argc;i++)
		puts(argv[i]);
	return 0;
}