#include<stdio.h>
#define greetings "Welcome to the Network"
main(){
	
	//Declaration and Initialization of strings
	char name[100];
	
	printf("Enter your Name: ");
	scanf("%s", name); 
	
	
	printf("Hey %s, %s", name, greetings);
	
	
}
