#include<stdio.h>
main(){
	int theArray[] = {5,7,9,11,13};
	int k;
	
	for(k=0; k<5; k++){
		printf("The Value is %d and it's address is %p\n", *(theArray+k),(theArray+k));
	}
	
	//%u,%x,%p - returns unsigned int, hexadecimal and pointer respectively
}
