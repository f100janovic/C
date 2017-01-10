#include <stdio.h>
//ispisuje sve reci unete kao argument programa
int main(int argc, char* argv[]){
	int i;
	if(argc==1){
		printf("Nije uneta nijedna rec kao argument");
		return 0;
	}
	for(i=0;i<argc;i++){
		printf("%s\n", argv[i]);
	}
    return 0;
}
