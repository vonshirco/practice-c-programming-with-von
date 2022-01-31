#include<stdio.h>
main (){
	//Accepting Marks of 5 Students in array (Lab Q19)
	float marks[5]; //declaring an array of marks 
	int i;
	
	//Accepting marks from the user
	for(i=0; i<5; i++){
		printf("Enter StudentMarks%d: \n",i);
		scanf("%f",&marks[i]);
	}
	
	//Display marks of the 5 Students
	printf("The Marks of Students are:\n");
	for(i=0; i<5; i++){
		printf("%.1f\n", marks[i]);	
	}
	
}
