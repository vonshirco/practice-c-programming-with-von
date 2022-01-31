#include<stdio.h>

//Defining function
float sum(float scores[5]){
	float total = 0;
	int i;
	for(i=0; i<6; i++)
	total = total + scores[i];
	return total;
}
main(){
	float marks[] = {5,6,7,3,6.5,4};
	printf("Total sum of elements in the array is %.2f.", sum(marks));
	return 0; //returns false
	//Means the program will execute successfully and did what it was intended to do
}
