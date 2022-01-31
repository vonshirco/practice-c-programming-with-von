#include<stdio.h>
int my_array[] = {23,12,54,0,-9,37}; //Array declaration
int*ptr; //Pointer declaration
main(){
	int i; //Controls the loop
	ptr = my_array; //Accesses Addresses from the array
	
	for(i=0; i<6; i++){
		printf("my_array[%d] = %d\n", i,my_array[i]);
		printf("ptr + %d = %d\n", i,*(ptr++));
	}
}

