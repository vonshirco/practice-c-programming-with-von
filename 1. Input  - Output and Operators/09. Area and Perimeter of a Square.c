#include<stdio.h> //Including the standard input output Library
main(){
	int length,area,perimeter; //Assigning memory space to variables
	
	printf("Enter the Length: "); //Gives output to the monitor
	
	scanf("%d", &length); //Receives input from the keyboard, ampersand(&)length gives the address to the inputed value
	
	//Declaring Variables
	area = length*length;
	perimeter = 4*length;
	
	printf("The Area is %d sq.cm, and the Perimeter is %d cm.", area, perimeter); //Gives output to the monitor
}
