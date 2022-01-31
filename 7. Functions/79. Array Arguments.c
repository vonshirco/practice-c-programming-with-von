#include <stdio.h>

void convert(int *inArray, int n){ //Defining the function
	int i;
	for(i=0; i<n; i++){
		*(inArray + i) = 3 * *(inArray + i);
	}
}
main(){
	int k; 
	int values[] = {4,6,7,12,7};
	//Calling the function
	convert(values,5);
	for(k=0; k<5; k++)
	printf("%d\t", values[k]);
}
