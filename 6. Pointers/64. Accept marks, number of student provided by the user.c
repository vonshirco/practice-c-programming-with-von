#include<stdio.h>
main(){
	//Accept marks number of student provided by the user
	//Declaring variables
	int arrSize,i;
	float marks[arrSize];
	
	//Specifying Array size
	printf("Specify the number of Students: \n");
	scanf("%d", &arrSize);
	
	//Accepting student marks
	for(i=0; i<arrSize; i++){
		printf("Enter Mark%d: ", i);
		scanf("%f", &marks[i]);
	}
	
	//Displaying the marks of the student
	printf("The marks of Students are: \n");
	for(i=0; i<arrSize; i++){
		printf("%0.1f\n", marks[i]);
	}
	
}
