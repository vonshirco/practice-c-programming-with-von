#include<stdio.h>
main(){
	//Computing the Coursework
	int test1, test2, coursework; //Declaring variables
	
	printf("Enter your marks for Test 1: ");
	scanf("%d",&test1);
	printf("Enter your marks for Test 2: ");
	scanf("%d",&test2);
	
	coursework = test1 + test2;
	
	(test1<=20 && test2<=20)?printf("Your Coursework is %d",coursework):printf("Enter Valid Marks");
}
