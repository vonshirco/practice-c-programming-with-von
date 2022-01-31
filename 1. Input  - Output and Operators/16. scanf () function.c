#include<stdio.h>
main(){
	int age; //Declaring a variable 
	char name [15];
	
	printf("Enter your name: ");
	scanf("%s",name); //name is %s bcoz string is a group of chararcters
	/*we have used name instead of &name bcoz name is a char array and we know
	that array name decay to pointers in c. name in the scanf already points to the 
	address in the string which is why we dont need to use &*/
	
	/* Also the scanf function reads the sequence of characters until it encounters whitespace 
	(space, newline, tab etc) */
	printf("Enter your age: ");
	scanf("%d",&age);
	
	printf("\n");
	
	printf("Your name is %s and you are %d years old",name,age);
	
	
}
