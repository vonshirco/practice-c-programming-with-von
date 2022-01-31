#include<stdio.h>

main(){
	//It is used repetitively often in a while loop to read the whole string
	
	char ch;
	
	printf("Enter a character, to exit enter # ");
	
	while(ch != '#'){
		ch = getchar();
		printf("\nYou have entered the character: ");
		putchar(ch);//print a single character
		printf("\n");
	}
	
}
