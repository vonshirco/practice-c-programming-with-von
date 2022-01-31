#include<stdio.h>
#define PI 3.14 //Defining a CONSTANT that will not change throught
main(){
	float radius,area,circumference;
	printf("Enter the Radius of the Circle: ");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circumference = 2 * PI * radius;
	printf("The Area is %.2f sq.cm and the Circumference is %0.2f cm", area, circumference);
}
