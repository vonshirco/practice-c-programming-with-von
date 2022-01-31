#include<stdio.h>
main(){
	int i,min,max;
	int sum=0;
	printf("Enter the min value: ");
	scanf("%d",&min);
	printf("Enter the max value: ");
	scanf("%d",&max);
	
	if(min%2 == 0){ //here if min is an even number
		min=min+1;  //same as min++
	}else{ //here if the number is odd
		min=min+2;
	}
	
	for(i=min; i<max; i=i+2){
		sum = sum + i;
	}
	printf("The sum of odd numbers between min and max value is %d",sum);
	
}
