#include<stdio.h>

convert(int theArray, int n){
	int i, deduct; 
	for(i=0; i<n; i++){
		deduct = ((theArray + i)-7);
	}
	return deduct;
	//return 0;
}
main(){
	int k, results;
	int values[] = {27,37,47,57,67};
	
	printf("The Addresses of the elements are: \n");
	for(k=0; k<5; k++)
	printf("%x\t", convert((values + k),5));
	//return 0;
	
}
