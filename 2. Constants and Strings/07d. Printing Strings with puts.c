#include<stdio.h>
main(){
	//Puts - the same as printf, it does away with the limitations of the printf(terminating string after reading a blank space)
	
	char name[15];
	
	printf("Your Name: ");
	gets(name); //does the same as scanf
	
	puts(name); //PRINTS TO SCREEN same as printf
	
}
