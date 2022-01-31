#include <stdio.h>
main(){
	int i, arrSize;
	float sum=0, avg;
	
	//Initializing array size or length (Although we were required to initilize 10 directly)
	printf("Specify the size of the array: ");
	scanf("%d", &arrSize);
	
	printf("Please enter the numbers:\n");
	
	//Accepting data from the keyboard
	float num[arrSize];
	for(i=0; i<arrSize; i++){
		printf("Numb%d: ", i);
		scanf("%f", &num[i]);
	}
	
	//Displaying the sum and average of the array elements
	for(i=0; i<arrSize; i++){
		sum = sum + num[i]; //Sum of the elements
	}
	
	avg = sum/arrSize; //Average of elements
	
	printf("The sum is %.1f and the average is %0.1f", sum,avg);
}
