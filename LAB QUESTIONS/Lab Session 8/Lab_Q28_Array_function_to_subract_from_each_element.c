#include<stdio.h>

void convert(int *theArray, int n){
	int i; 
	for(i=0; i<n; i++){
		*(theArray + i) = *(theArray + i) - 7;
	}
	
}
main(){
	int k, results;
	int values[] = {27,37,47,57,67};
	convert(values,5);
	printf("The Addresses of the elements are: \n");
	for(k=0; k<5; k++)
		printf("%x\t", (values + k));
	
}
