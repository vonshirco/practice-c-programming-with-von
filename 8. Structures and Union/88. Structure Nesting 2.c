#include<stdio.h>

//Defining structures
struct studentDetails
{
	int collageId;
	char *collageName; //char collageName[50]; will not be assignable in eg. allDetails.name

struct studentDetails2
{
	int id;
	char *name;   //char name[20];
	float percentage;
	struct studentDetails details1;
};

main(){
	//Initilizing and asigning values to structures
	struct studentDetails2 allDetails;
	
	allDetails.details1.collageId = 2006;
	allDetails.details1.collageName = "Collage of Information and Communication Technology";
	allDetails.id = 2021;
	allDetails.name = "Von";
	allDetails.percentage = 99;
	
	//Displaying the values
	printf("Student's Details are:\n");
	printf("Collage ID: %d\n", allDetails.details1.collageId);
	printf("Collage Name: %s\n", allDetails.details1.collageName);
	printf("Student ID: %d\n", allDetails.id);
	printf("Student Name: %s\n", allDetails.name);
	printf("Percentage: %.2f%%", allDetails.percentage);
	
}
