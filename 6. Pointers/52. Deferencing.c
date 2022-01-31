#include<stdio.h>
main(){
	//Deferencing - accessing the value from the memory address/location
	
	//Declaring Variables
	int num = 123;
	float x = 14.56;
	//Declaring Pointers
	int *intPtr; //intPtr is a pointer it expects only addresses
	float *floatPtr; //floatPtr is a pointer also, it takes addresses only
	//Pointers getting addresses to point
	intPtr = &num;
	floatPtr = &x;
	
	printf("The value of num (%d) is at address %u.\n", num,intPtr);
	printf("The value x (%.2f) is at address %u.\n\n", x,floatPtr);
	
	//Deferencing
	printf("Output after Deferencing: \n");
	printf("The value of num is %d.\n", *intPtr);
	printf("The value of x is %.2f.", *floatPtr);	
}
