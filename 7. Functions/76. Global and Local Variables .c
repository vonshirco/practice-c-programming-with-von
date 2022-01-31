#include<stdio.h>

//Defining Global variables (Can be accessed in any function)
int A,B;

//Defining the add function
int add(){
	return A + B;
}

main(){
	//Defining Local varibles (can be accessed in the main function only)
	int answer;
	A = 11;
	B = 17;
	
	answer = add(); //Calling the function add
	
	printf("The answer is %d", answer);
	
}
