#include<stdio.h>

float myFunction(int num1, int num2, int a){ //Defining the function
	if(a==1){
		return num1 * num2;
	}else if(a==2){
		return num1 + num2;
	}else{
		return 0;
	}
}
main(){
	int b;
	float var1, var2, option;
	
	printf("Enter num1: ");
	scanf("%f", &var1);
	printf("Enter num2: ");
	scanf("%f", &var2);
	
	printf("Choose 1 for product or 2 for sum: ");
	scanf("%d", &b);
	
	option = myFunction(var1,var2,b); //Calling the function
	
	printf("Answer is %.2f", option);
	
}
