#include <stdio.h>
main(){
	//Initialization of array size and accepting data
	
	int i, arrLen;
	 
	//initialize array size/length
	printf("Please Specify the number of Students: ");
	scanf("%d", &arrLen);
	
	//Declaring array variable 
	float marks[arrLen]; //size/length already initialized
	printf("\n");
	
	//accepting data from the keyboard
	for(i=0; i<arrLen; i++){
		printf("Enter marks %d: ", i);
		scanf("%f", &marks[i]);
	}
	
	//Showing the marks
	printf("\nThe marks are:\n");
	for(i=0; i<arrLen; i++){
		printf("%.1f\n", marks[i]);
	}
	
}
