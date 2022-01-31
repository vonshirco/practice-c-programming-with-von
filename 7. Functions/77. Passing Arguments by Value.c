#include<stdio.h>
//Passing Arguments by Value (The function process arguments without affecting the original values)
	
/*Means you pass a copy of the value in memory, the function operates on the copy.
This means that when a function changes the value of an argument passed by value, the 
effect is local to that function.(The copy changes but the original value in memory is not
affected.)*/

//Code for demonstration..

void swap(int a,int b){ //Defining a function
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
main(){
	int m = 22, n = 44;
	
	//Calling swap function by value
	printf("Before swap m = %d and n = %d\n", m,n);
	swap(m,n); //Calling function
	printf("After swap m = %d and n = %d\n",m,n); //Original Values not affected
	
}
