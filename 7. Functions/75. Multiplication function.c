#include <stdio.h>
main(){
	int num1, num2, product;
	
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);
	
	product = multiply(num1,num2);
	
	printf("The product is %d", product);
}

//Defining the function
int multiply(int var1,int var2){
	return var1 * var2;
}
