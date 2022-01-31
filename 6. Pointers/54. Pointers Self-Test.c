#include<stdio.h>
main(){
	//Declaring a variable
	float x;
	//Assigning value to a variable
	x = 15.3; 
	//Declaring a pointer variable
	float *xPtr;
	//Assigning address of x to the pointer variable
	xPtr = &x;
	
	//Displaying the address of variable x
	printf("The address of varible x is %u.\n", xPtr);
	 
	//Displaying the value of x variable through reading from the address in the pointer variable
	printf("The value of variable x is %.1f.", *xPtr);
}
