#include<stdio.h>
//Definig the structure
struct grade {
	char regNo[15];
	float marks;
};

main(){
	//Declaring and Initializing the structure
	struct grade theGrade[5];
	
	int i;
	
	for(i=0; i<5; i++){
		printf("\nEnter details of student %d\n", i+1);
		
		printf("Enter the name: ");
		scanf("%s", &theGrade[i].regNo);
		
		printf("Enter the marks: ");
		scanf("%f", &theGrade[i].marks);
	}
	
	printf("\nReg NO:\tMarks:\n");
	for(i=0; i<5; i++){
		printf("%s\t%.2f\n", theGrade[i].regNo, theGrade[i].marks);
	}
}
