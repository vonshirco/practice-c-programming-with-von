#include <stdio.h>

main(){
	
	float salary, relTax;
	
	printf("Enter the salary: ");
	scanf("%f",&salary);
	
	if(salary <= 170000){
		relTax = 0 * salary; 
		printf("Your Relevant Tax is %.2f", relTax);
	}
		
	else if(salary > 170000 && salary <= 360000){
		relTax = 0.11 * salary; //11% = 11/100 = 0.11
		printf("Your Relevant Tax is %.2f", relTax);
	}
		
	else if(salary > 360000 && salary <= 540000){
		relTax = 0.2 * salary;
		printf("Your Relevant Tax is %.2f", relTax);
	}
	
	else if(salary > 540000 && salary <= 720000){
		relTax = 0.25 * salary; 
		printf("Your Relevant Tax is %.2f", relTax);
	}
		
	else{ //if salary > 720000
		relTax = 0.3 * salary; 
		printf("Your Relevant Tax is %.2f", relTax);
	}
		
}
