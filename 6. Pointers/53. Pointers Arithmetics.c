#include <stdio.h>
main(){
	//Pointers Arithmetics - pointer variables can be computed as any other variable
	
	//Declaring Variables
	int sum, prod;
	int num1 = 5;
	int num2 = 10;
	//Declaring Pointer Variables
	int *intP1;
	int *intP2;
	//Pointers gets address to point
	intP1 = &num1;
	intP2 = &num2;
	//Pointer Arithmetics 
	//Deferencing to access the values from the memory address/location
	sum = *intP1 + *intP2;
	prod = *intP1 * *intP2;
	
	printf("The sum is %d and the product is %d", sum,prod);
}
