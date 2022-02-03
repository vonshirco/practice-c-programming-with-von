#include <stdio.h>
#include <string.h>
main(){
	int age,count;
	char name [15];
	printf("Enter the Name: ");
	scanf("%s",name);
	printf("Enter the Age: ");
	scanf("%d",&age);
	
	count = strlen(name);
	
	if (count>12 && age>18){
		printf("THANK YOU");
	}else{
		printf("WRONG ENTRY");
	}
}
