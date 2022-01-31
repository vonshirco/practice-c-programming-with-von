#include<stdio.h>
//Defining a Structures
struct employeeInfo
{
	int age;
	float height;
};

struct employeeInfo2
{
	double salary;
	struct employeeInfo data1;
};

main(){
	//Declaring variable of a structure and Initializing the structures 
	struct employeeInfo2 allData;
	 
	//Assigning values to the structures
	allData.data1.age = 18;
	allData.data1.height = 5.75;
	allData.salary = 1500;
	
	//Displaying the info
	printf("Employee info:\n");
	printf("Age: %d\n", allData.data1.age);
	printf("Height: %.2f\n", allData.data1.height);
	printf("Salary: %.2f", allData.salary);
	
}
