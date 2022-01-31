#include<stdio.h>
#define PI 3.14
//Area of the circle
float areaCircle(int rad){
	return (PI*rad*rad);
}

main(){
	float radius, area;
	
	printf("Enter the radius: ");
	scanf("%f", &radius);
	
	area = areaCircle(radius); //Calling the function
	
	printf("The area is %.2f", area);
}
