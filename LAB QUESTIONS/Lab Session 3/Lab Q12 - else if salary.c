#include <stdio.h>

main(){
	
	float salary, relTax;
	
	printf("Enter the salary: ");
	scanf("%f",&salary);
	
	if(salary <= 170000){
		relTax = 0 * salary; //0% = 0/100
		printf("Your Relevant Tax is %.2f", relTax);
	}
		
	else if(salary > 170000 && salary <= 360000){
		relTax = 0.11 * salary; //11% = 11/100
		printf("Your Relevant Tax is %.2f", relTax);
	}
		
	else if(salary > 360000 && salary <= 540000){
		relTax = 0.2 * salary; //20% = 20/100
		printf("Your Relevant Tax is %.2f", relTax);
	}
	
	else if(salary > 540000 && salary <= 720000){
		relTax = 0.25 * salary; //25% = 25/100
		printf("Your Relevant Tax is %.2f", relTax);
	}
		
	else{ //if salary > 720000
		relTax = 0.3 * salary; //30% = 30/100
		printf("Your Relevant Tax is %.2f", relTax);
	}
		
}
