#include <stdio.h>
main(){
	//Multi-Dimension Array
	//marks goes to the rows, subject goes to the columns
	float marks[7][2]; //float marks[row][column];
	int i,j;
	
	//Accepting data
	for(i=0; i<2; i++){
		
		if(i==0){
			printf("Enter Physics marks:\n");	
		}else{
			printf("Enter Mathematics marks:\n");
		}
		
		for(j=0; j<7; j++){
			scanf("%f", &marks[j][i]);
		}
		
	}
	
	printf("\nThe marks for the respective subjects are:\n\n");
	
	//Showing the data (Subjects and Marks)
	for(i=0; i<2; i++){
		
		if(i==0){
			printf("Physics\n");
		}else{
			printf("Mathematics\n");
		}
		
		for(j=0; j<7; j++){
			printf("%.1f\n", marks[j][i]);
		}
	}
}
