#include<stdio.h>

//Defining factorial function
int fact(int i){
	int j, k;
	j = 1;
	for(k=2; k<=i; k++)  //or k can start k=1, but --> 1x1=1, thus why we skip 1
	j = j*k;
	return j;
}
//Recall factorial of a number eg.6
// 6! = 6*5*4*3*2*1
main(){
	int num, value;
	printf("Enter a number to get it's factorial: ");
	scanf("%d", &num);
	
	value = fact(num); //Calling the factorial function
	
	printf("\nThe factorial of %d is %d.", num,value);
}
