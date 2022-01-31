#include<stdio.h>
main(){
	int i,min,max,choice;
	int sum=0;
	
	printf("For sum of odd numbers btw min and max enter 1 for even numbers enter 2: ");
	scanf("%d", &choice);
	
	printf("Enter the min value: ");
	scanf("%d",&min);
	printf("Enter the max value: ");
	scanf("%d",&max);
	
	if(choice == 1){ //To find the sum of odd numbers
		
		if(min%2 == 0){ //here if min is an even number
			min=min+1;  //increment it to a odd number
		}else{ //here if the number is odd
			min=min+2; //increment it to the next odd 
		}
	
		for(i=min; i<max; i=i+2){
			sum = sum + i;
		}
		printf("The sum of odd numbers between min and max value is %d",sum);
	
	}else{ //To find the sum of even numbers
		if(min%2 != 0){ //here if min is an odd number
			min=min+1;  //increment it to a even number
		}else{ //here if the number is even
			min=min+2; //increment it to the next even 
		}
	
		for(i=min; i<max; i=i+2){
			sum = sum + i;
		}
		printf("The sum of even numbers between min and max value is %d",sum);
	}
	
	
}
