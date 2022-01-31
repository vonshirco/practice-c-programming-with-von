#include <stdio.h>
//Defining the structure
struct student{
	char regNo[20];
	char sex[7];
	float allowance;
};
main(){
	//Declaring a variable for the structure and Initializing
	struct student coict[3]= {
		{"2021-04-000001","Male",100},
		{"2021-04-000002","Male",200},
		{"2021-04-000003","Male",300}
	};
	
	//Displaying
	printf("Registration Number: %s\n", coict[0].regNo);
	printf("Sex: %s\n", coict[0].sex);
	printf("Allowance: %.2f\n\n", coict[0].allowance);
	
	printf("Registration Number: %s\n", coict[1].regNo);
	printf("Sex: %s\n", coict[1].sex);
	printf("Allowance: %.2f\n\n", coict[1].allowance);
	
	printf("Registration Number: %s\n", coict[2].regNo);
	printf("Sex: %s\n", coict[2].sex);
	printf("Allowance: %.2f\n", coict[2].allowance);
	
}
