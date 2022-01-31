#include<stdio.h>

int ageCheck(int age){
	if(age>0 && age<100){
		return 1;
	}else{
		return 0;
	}
}

main(){
	int varAge, check;
	printf("Enter the age: ");
	scanf("%d", &varAge);
	
	check = ageCheck(varAge); //Calling the function
	
	printf("Age: %d", check);
}
