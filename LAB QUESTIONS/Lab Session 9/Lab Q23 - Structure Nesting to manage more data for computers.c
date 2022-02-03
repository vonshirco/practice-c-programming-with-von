#include<stdio.h>
//Defining Stuctures
struct computerData{
	char brand[20];
	int hddSize;
	float price,screenSize;	
};

struct computerData2{
	char status[20];
	char region[20];
	int units;
	struct computerData cRecords;
};

main(){
 	//Specifying number of computers
	int cNum;
	printf("Enter the number of Computers to Record: ");
	scanf("%d", &cNum);
	
	//Declaring the structure array
	struct computerData2 cRecords2[cNum];
	
	int i;
	for(i=0; i<cNum; i++){
		printf("\nEnter Records of Computer %d: \n", i+1);
		
		printf("Computer Brand: ");
		scanf("%s", cRecords2[i].cRecords.brand);
		
		printf("HDD Size: ");
		scanf("%d", &cRecords2[i].cRecords.hddSize);
		
		printf("Computer Price: ");
		scanf("%f", &cRecords2[i].cRecords.price);
		
		printf("Screen Size: ");
		scanf("%f", &cRecords2[i].cRecords.screenSize);
		
		printf("Working Status: ");
		scanf("%s", cRecords2[i].status);
		
		printf("Region: ");
		scanf("%s", cRecords2[i].region);
		
		printf("Available Units: ");
		scanf("%d", &cRecords2[i].units);
	}
	
	//Displaying the Records
	printf("\nBrand:\tHDD:\tPrice:\tScreen:\tStatus:\tRegion:\tUnits:\n");
	for(i=0; i<cNum; i++){
		
		printf("%s\t%d\t%.2f\t%.1f\t%s\t%s\t%d\n", 
		cRecords2[i].cRecords.brand, cRecords2[i].cRecords.hddSize, 
		cRecords2[i].cRecords.price, cRecords2[i].cRecords.screenSize, 
		cRecords2[i].status, cRecords2[i].region, cRecords2[i].units );
		
	}
	
}
