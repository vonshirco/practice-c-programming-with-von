#include<stdio.h>
main(){
	/*Populating the array multiArr with elements in the array theArr by multiplying each
	element in theArr by 3 using pointers*/
	
	//Initializing variables and array
	int k;
	float multiArr[7];
	float theArr[] = {2.5,5,6.7,10,13.3,25,0};
	
	//Populating/copying elements to multiArr from theArr
	for(k=0; k<7; k++){
		*(multiArr + k) = *(theArr + k);
		//Or --> multiArr[k] = theArr[k]; 
	}
	
	//Displaying the Original Array theArr
	printf("The Original Array theArr is:\n");
	for(k=0; k<7; k++){
		printf("%.1f\t", *(theArr + k));
		//Or --> printf("%.1f\t", theArr[k]);
	}
	
	//Displaying the Populated Array multiArr with elements multiplied by 3 from theArr
	printf("\n\nThe Populated Array multiArr with elements multiplied by 3 from theArr is:\n");
	for(k=0; k<7; k++){
		printf("%.1f\t", ((*(multiArr + k)) * 3));
		//Or --> printf("%.1f\t", multiArr[k] * 3);
	}
}
