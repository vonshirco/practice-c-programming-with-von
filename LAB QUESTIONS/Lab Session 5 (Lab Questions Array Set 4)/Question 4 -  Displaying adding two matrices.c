#include<stdio.h>
main(){
	//A program to read two matrices of order 4*2, add them and display the resultant matrix
	
	int i,j,rows,columns; //initializing variables
	
	//initializing matrices order (Instead of specifying directly 4*2)
	printf("Specify order of the matrices by entering number of rows then columns: \n");
	scanf("%d%d", &rows,&columns);
	
	//initializing array variables (the matrices) and the size
	int a[rows][columns], b[rows][columns];
	
	printf("\nFill the matrices by entering elements in the columns of each row at a time.\n\n");
	
	//Receiving elements of the matrices
	printf("Enter the first matrix: \n");
	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the second matrix: \n");
	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	//Adding the matrices
	printf("\nThe sum of the two matrices is: \n");
	
	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			printf("%d ", a[i][j] + b[i][j]);
		}	
		printf("\n\n");
	}
		
}
