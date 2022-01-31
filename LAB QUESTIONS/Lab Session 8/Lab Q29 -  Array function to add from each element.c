#include<stdio.h>

convert(int theArray, int n){
	int i; 
	for(i=0; i<n; i++){
		return ((theArray+i)+2);
	}
}
main(){
	int k, values[] = {2,4,6,8,10};
	
	printf("The Addresses of the elements are: \n");
	for(k=0; k<5; k++){
		printf("%x\t", convert((values +k ), 5));
	}
	
	//Address of the first element
	printf("\n\nThe Address of the first element is %x", convert((values),5));
	
}
