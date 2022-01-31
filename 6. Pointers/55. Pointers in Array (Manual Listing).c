#include<stdio.h>
main(){
	//The name of the array holds the address of the first Element in the array 
	//(thus no need of declaring pointer variable and assigning address to the pointer)
	//Elements of an array are adjacent to each other
	
	int theArray[] = {5,7,11,13};
	
	printf("Array/Pointer: %d Address: %d\n", theArray[0], theArray); //returns unsigned int
	printf("Array/Pointer: %d Address: %x\n", theArray[1], (theArray+1)); //returns hexadecimal
	printf("Array/Pointer: %d Address: %p\n", theArray[2], (theArray+2));
	printf("Array/Pointer: %d Address: %x\n\n", theArray[3], (theArray+3));
	
	printf("Array/Pointer: %d Address: %u\n", theArray[4], (theArray+4));
	printf("Array/Pointer: %d Address: %p\n\n", theArray[5], (theArray+5));
	
	//Displaying Elements of the array after Deferencing the array names
	printf("After Deferencing Array name:\n");
	printf("Array/Pointer: %d Address: %d\n", *theArray, theArray); //returns unsigned int
	printf("Array/Pointer: %d Address: %x\n", *(theArray+1), (theArray+1)); //returns hexadecimal
	printf("Array/Pointer: %d Address: %p\n", *(theArray+2), (theArray+2));
	printf("Array/Pointer: %d Address: %x\n\n",*(theArray+3), (theArray+3));
	
	printf("Array/Pointer: %d Address: %u\n", theArray[4], (theArray+4));
	printf("Array/Pointer: %d Address: %p\n\n", theArray[5], (theArray+5));
}
