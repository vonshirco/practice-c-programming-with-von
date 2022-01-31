#include<stdio.h>
main(){
	//Array of String
	int i;
	char *strArr[] = {"one", "two", "three"}; //Array of Pointers to Characters
	
	/*Note:
	char strArr; //Declaration of a character
	char *strArr; //Declaration of a pointer to a character
	char *strArr[5]; //An array of pointers to a character
	*/
	
	for(i=0; i<3; i++){
		printf("%s\n", strArr[i]);
	}
}
