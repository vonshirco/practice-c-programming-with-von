#include<stdio.h>
main(){
	/*Three ways to read strings from the keyboard are:
	scanf(), gets(), and getchar()
	A string is an array of characters, no need for the address operator, ampersand
	
	scanf() weakness is that, it terminates as soon as it reaches a blank space
	gets() overcomes the weakness of scanf()
	*/
	char name[100];
	printf("Enter your Fullname: ");
	//scanf("%s", name); this terminate as it reaches the a blank space
	gets(name); //this reads the whole string including blank spaces
	
	printf("Your Full name is %s", name);
	
	
}
