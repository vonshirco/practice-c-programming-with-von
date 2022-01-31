#include<stdio.h>
#include<string.h>
main(){
	int count;
	char password[100];
	printf("Enter your Password: ");
	scanf("%s",password);
	
	count = strlen(password); //Calculating the length of the Password
	
	if(count < 7)
	printf("TOO SHORT");
	else
	printf("STRONG");	
}
