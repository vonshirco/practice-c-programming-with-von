#include<stdio.h>
main(){
	//Declaring Variable
	int arrSize;
	int i,j;
	float marks[arrSize][2]; //float marks[row][column];
	
	//Specify number of students
	printf("Enter the number of students: ");
	scanf("%d", &arrSize); 

	//Accept Marks of each subject
	for(i=0; i<2; i++){ //for subjects
		if (i==0){
			printf("Enter marks for Subject1: \n");
		}else{
			printf("Enter marks for Subject2: \n");
		}
		
		for(j=0; j<arrSize; j++){
			printf("Enter mark%d: \n",j);
			scanf("%f", &marks[j][i]);
		}
	}
	
	//Display the subjects and their respective marks of students
	printf("\nThe Marks for respective subjects are: \n");
	for(i=0; i<2; i++){
		if(i==0){
			printf("Subject1:\n");
		}else{
			printf("Subject2:\n");
		}
		for(j=0; j<arrSize; j++){
			printf("%.1f\n", marks[j][i]);
		}
	}
	
}    
