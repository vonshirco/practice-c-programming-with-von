#include <stdio.h>
main(){
	int num1, num2, sum;
	
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);
	
	sum = add(num1,num2); //Calling the function
	
	printf("The sum is %d", sum);
}

//Defining add function
int add(int var1,int var2){
	int results;
	results = var1 + var2;
	return results;
}

//If function in another file 
//You include the file name by --> #include "add.c"
