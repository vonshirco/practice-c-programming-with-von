#include <stdio.h>
#include <string.h>
main(){
	char string [100];
	printf("Enter a String: ");
	scanf("%s",string);
	
	printf("Number of characters in the string is %d", strlen(string));
	//strlen() calculate the size of the string or number of characters
}
