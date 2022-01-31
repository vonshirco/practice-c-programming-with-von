#include<stdio.h>
main(){
	int i,min,max,sumOdd;
	printf("Enter the min value: ");
	scanf("%d",&min);
	printf("Enter the max value: ");
	scanf("%d",&max);
	
	for(i=min; i<max; i++){
		if(i%2 != 0){
			sumOdd = i + sumOdd;
		}
	}
	
	printf("The sum of odd numbers between %d and %d is %d",min,max,sumOdd);
}
