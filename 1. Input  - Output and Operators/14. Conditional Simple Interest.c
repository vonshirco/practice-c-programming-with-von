#include <stdio.h>
main(){
	//simple interest = (principle x rate x time)/100
	float sInterest,principle,rate,time;
	printf("Enter the principle,rate and time: ");
	scanf("%f%f%f",&principle,&rate,&time);
	sInterest = (principle*rate*time)/100;
	(sInterest>10)?printf("UNACCEPTABLE RATE"):printf("The Simple interest is %0.2f",sInterest);
	
}
