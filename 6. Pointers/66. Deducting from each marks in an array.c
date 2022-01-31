#include<stdio.h>
main(){
	//Declaring Variables
	int i, arrSize;
	float marks[arrSize];
	
	//Specifying students' marks
	printf("Enter number of students: ");
	scanf("%d", &arrSize);
	
	//Accepting students' marks 
	for(i=0; i<arrSize; i++){
		printf("Enter mark%d: \n", i);
		scanf("%f", &marks[i]);
	}
	
	//Deducting 7 from each students' marks
	printf("\nThe Final Marks are: \n");
	float finalMarks;
	for(i=0; i<arrSize; i++){
		//Or using pointers --> finalMarks = (*(marks+i)-7); 
		finalMarks = marks[i] -7;
		
		if(finalMarks < 40){
			finalMarks = 40;
			}
		printf("%0.1f\n", finalMarks);
	}
	
}
