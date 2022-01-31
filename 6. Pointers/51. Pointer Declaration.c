#include<stdio.h>
main(){
	//Pointers Declaration
	int a = 5; //Memory Space is reserved
	int *b; // The asterisk(*) tells the compiler that b is a pointer variable
	
	b = &a; //The pointer gets an address to point to
	printf("The address is %u and the value is %d.", b,a);
}
