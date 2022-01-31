#include<stdio.h>
main(){
	//Declaring Variables
	int i, arrSize;
	float marks[arrSize];
	
	//Specifying Students' marks
	printf("Enter the number of Students:");
	scanf("%d", &arrSize);
	
	//Accepting Students Marks
	for(i=0; i<arrSize; i++){
		printf("Enter marks%d: ", i);
		scanf("%f", &marks[i]);
	} 
	
	//Computations in the Array - mean, average deviation from the mean
	float avg, avgdvt, sum = 0, meanDeviations = 0; ;
	for(i=0; i<arrSize; i++){ 
		sum = sum + marks[i];
//		//or using pointers --> sum = sum + *(marks+i);
		avg = sum/arrSize; //Mean of marks
		meanDeviations = meanDeviations + (marks[i] - avg);
		//or using pointers --> meanDeviations = meanDeviations + (*(marks+i) - avg);
		avgdvt = meanDeviations/arrSize; //Average Deviation of marks from the mean 
		
	}
	
	printf("Sum is %.2f, the mean is %.2f and the mean deviation is %0.2f", sum,avg,avgdvt);
}
