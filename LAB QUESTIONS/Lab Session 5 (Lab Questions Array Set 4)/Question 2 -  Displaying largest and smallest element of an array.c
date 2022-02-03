#include <stdio.h>
main(){
	//Displaying largest and smallest number entered in the array
	int i;
	float num[20], large, small ;
	
	//Entering and receiving numbers from the keyboard
	for(i=0; i<20; i++){
		printf("Enter numb%d: ", i);
		scanf("%f", &num[i]);
	}
	
	//initilizing the large and small number to the first element in a loop  
	large = num[0]; //will be used when looping to find large
	small = num[0]; //will be used when looping to find small
	//above is same as num[0] = large = small;
	
	for(i=1; i<20; i++){
		//from 2nd element to the last element find the largest element than the initilized one and update the value of large
		if(num[i] > large)
		large = num[i];
		 
		//from 2nd element to the last element find the smallest element than the initilized one and update the value of small
		if(num[i] < small) 
		small = num[i];
	}
	
	//Displaying the largest and the smallest number 
	printf("\nThe largest number is %.1f and the smallest number is %.1f", large,small);
	
}
