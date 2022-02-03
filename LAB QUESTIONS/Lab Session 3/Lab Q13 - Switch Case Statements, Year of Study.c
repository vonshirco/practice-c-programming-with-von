#include<stdio.h>
main(){
	int years;
	
	printf("Enter the number of years of your study: ");
	scanf("%d",&years);
	
	switch(years){
		case 2: printf("Certificate");break;
		case 3: printf("Diploma");break;
		case 4: printf("Bachelor");break;
		case 6: printf("Masters");break; 
		default: printf("Invalid Years of Study");
	}
}
