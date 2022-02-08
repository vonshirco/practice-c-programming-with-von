/*
	Define a structure that can be used to manage data for computers 
	with attributes brand,HDD size,price and screen size.
	- Declare an array whose type is the stucture you have defined above
	
	- Using a for loop, write a program that can be used to prompt users 
		to enter the computer records
	- Display the results
*/
#include <stdio.h>

struct computers{
	char brand[30];
	int hddSize;
	float price;
	float screenSize;
};

main(){
	int records,i;
	printf("Enter number of computers: \n");
	scanf("%d",&records);
	struct computers laptops[records];
	for(i=0;i<records;i++){
		printf("Enter brand: \n");
		scanf("%s",laptops[i].brand);
		printf("Enter hard disk size(GB): \n");
		scanf("%d",&laptops[i].hddSize);
		printf("Enter the price: \n");
		scanf("%f",&laptops[i].price);
		printf("Enter the screen width(px): \n");
		scanf("%f",&laptops[i].screenSize);
	}
	
	for(i=0;i<records;i++){
		printf("PC Brand: %s\nHDD Size: %d\nPrice: Tsh%.2f\nScreen width: %.2fpx\n\n",
		laptops[i].brand,
		laptops[i].hddSize,
		laptops[i].price,
		laptops[i].screenSize
		);
	}
}
