#include<stdio.h>

//Defining a Structure
struct address {
	int postal1;
	char street[21];
	char city [21];
};

main(){
	//Initializing the structure
	struct address theAddress;
	
	//Assigning values to the variable theAddress to the struct address
	printf("Enter your Postal Address: ");
	scanf("%d", &theAddress.postal1);
	printf("Enter your Street: ");
	scanf("%s", theAddress.street);
	printf("Enter your City: ");
	scanf("%s", theAddress.city);
	
	//Displaying the address
	printf("\nThe Address is\n");
	printf("Postal Address: %d\n", theAddress.postal1);
	printf("Street: %s\n", theAddress.street);
	printf("City: %s", theAddress.city);
	
}
