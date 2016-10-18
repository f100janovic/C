#include <stdio.h>
#include <stdlib.h>
//najgore resenje ikad :D
//unosi se iks oks tabla i izbacuje ko je pobednik
//if funkcije proveravaju sve moguce kombinacije
int main()
{
    //tabla je array(niz) od 9 karaktera
	char tabla[8];
	int i;
    //unose se vrednosti table
	for(i=0;i<9;i++){
		scanf("%c", &tabla[i]);
	}
    //ispisuje tablu u preglednom obliku
	for(i=1;i<10;i++){
        if(i%3==0){
            printf("%c \n", tabla[i-1]);
        }
        else{
            printf("%c", tabla[i-1]);
        }
	}
	i=0;
	if(tabla[i]=='x'&&tabla[i+1]=='x'&&tabla[i+2]=='x'){
        printf("x\n");
	}
	if(tabla[i]=='o'&&tabla[i+1]=='o'&&tabla[i+2]=='o'){
        printf("o\n");
	}

    i=0;
	if(tabla[i]=='x'&&tabla[i+3]=='x'&&tabla[i+6]=='x'){
        printf("x\n");
	}
	if(tabla[i]=='o'&&tabla[i+3]=='o'&&tabla[i+6]=='o'){
        printf("o\n");
	}

	i=3;
	if(tabla[i]=='x'&&tabla[i+1]=='x'&&tabla[i+2]=='x'){
        printf("x\n");
	}
	if(tabla[i]=='o'&&tabla[i+1]=='o'&&tabla[i+2]=='o'){
        printf("o\n");
	}

	i=6;
	if(tabla[i]=='x'&&tabla[i+1]=='x'&&tabla[i+2]=='x'){
        printf("x\n");
	}
	if(tabla[i]=='o'&&tabla[i+1]=='o'&&tabla[i+2]=='o'){
        printf("o\n");
	}

	i=1;
	if(tabla[i]=='x'&&tabla[i+3]=='x'&&tabla[i+6]=='x'){
        printf("x\n");
	}
	if(tabla[i]=='o'&&tabla[i+3]=='o'&&tabla[i+6]=='o'){
        printf("o\n");
	}

	i=2;
	if(tabla[i]=='x'&&tabla[i+3]=='x'&&tabla[i+6]=='x'){
        printf("x\n");
	}
	if(tabla[i]=='o'&&tabla[i+3]=='o'&&tabla[i+6]=='o'){
        printf("o\n");
	}

	i=3;
	if(tabla[i]=='x'&&tabla[i+3]=='x'&&tabla[i+6]=='x'){
        printf("x\n");
	}
	if(tabla[i]=='o'&&tabla[i+3]=='o'&&tabla[i+6]=='o'){
        printf("o\n");
	}

	i=0;
	if(tabla[i]=='x'&&tabla[i+4]=='x'&&tabla[i+8]=='x'){
        printf("x\n");
	}
	if(tabla[i]=='o'&&tabla[i+4]=='o'&&tabla[i+8]=='o'){
        printf("o\n");
	}

	i=2;
	if(tabla[i]=='x'&&tabla[i+2]=='x'&&tabla[i+4]=='x'){
        printf("x\n");
	}
	if(tabla[i]=='o'&&tabla[i+2]=='o'&&tabla[i+4]=='o'){
        printf("o\n");
	}



	return 0;
}
