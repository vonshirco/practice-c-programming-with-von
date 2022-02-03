#include<stdio.h>
//Defining the Structure
struct computerData{
	char brand[20];
	int hddSize;
	float price,screenSize;	
};

main(){
	//Specifying number of computers
	int cNum;
	printf("Enter the number of Computers to Record: ");
	scanf("%d", &cNum);
	
	//Declaring the structure array
	struct computerData cRecords[cNum];
	
	int i;
	for(i=0; i<cNum; i++){
		printf("\nEnter Records of Computer %d: \n", i+1);
		
		printf("Computer Brand: ");
		scanf("%s", cRecords[i].brand);
		
		printf("HDD Size: ");
		scanf("%d", &cRecords[i].hddSize);
		
		printf("Computer Price: ");
		scanf("%f", &cRecords[i].price);
		
		printf("Screen Size: ");
		scanf("%f", &cRecords[i].screenSize);
	}
	
	//Displaying the Records
	printf("\nBrand:\tSize:\tPrice:\tScreen:\n");
	for(i=0; i<cNum; i++){
		printf("%s\t%d\t%.2f\t%.1f\n", cRecords[i].brand, cRecords[i].hddSize, cRecords[i].price, cRecords[i].screenSize);
	}
	 
}
