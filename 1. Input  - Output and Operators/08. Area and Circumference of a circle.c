#include<stdio.h>
#define PI 3.142
main(){
	float radius, area, circumference;
	printf("Enter the radius: ");
	scanf("%f", &radius); 
	//Declaring variables
	area = PI*radius*radius;
	circumference = 2*PI*radius;
	printf("The Area is %.2f sq.cm", area);
	printf(" and the Circumference is %.2f cm", circumference);
	
}
