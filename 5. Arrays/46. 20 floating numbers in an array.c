#include <stdio.h>
main(){
	//Entering 20 floating numbers in an array and displaying it
	int i;
	float num[20];
	
	//Entering and receiving numbers from the keyboard
	for(i=0; i<20; i++){
		printf("Enter numb%d: ", i);
		scanf("%f", &num[i]);
	}
	
	printf("\nThe numbers entered are:\n");
	
	//Displaying the numbers
	for(i=0; i<20; i++){
		printf("%.1f\n", num[i]);
	}
}
