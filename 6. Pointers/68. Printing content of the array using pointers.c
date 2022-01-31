#include<stdio.h>
main(){
	//Printing the content of the array using pointers
	int k;
	float theArr[] = {2.5,5,6.7,10,13.3,25,0};
	
	printf("The Content of the Array is: \n");
	for(k=0; k<7; k++){
		printf("%.1f\t", *(theArr + k));
	}
}
