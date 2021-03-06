#include<stdio.h>
//Passing Arguments by Reference(function process arguments and affects the original values)
/*Here you pass a pointer to the value in memory, the function operates on the argument, 
when a function changes the value of an arguments passed by reference, the original value
changes*/

void swap(int *a, int *b){ //Function definition
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

main(){
	int m = 22, n = 44;
	
	//Calling swap function by value
	printf("Before swap m = %d and n = %d\n", m,n);
	swap(&m,&n); //Function calling
	printf("After swap m = %d and n = %d\n", m,n);
}                                                                                                                                                              
