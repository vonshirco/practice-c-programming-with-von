#include<stdio.h>
main(){
	int num;
	printf("Enter a number to get it's square: ");
	scanf("%d", &num);
	
	//Calling the function
	square(num); //argument num is passed 
	
	printf("The square of %d is %d.", num,square());
}

//Defining the function
int square(int a){ //parameter a is passed
	return a * a;
}
