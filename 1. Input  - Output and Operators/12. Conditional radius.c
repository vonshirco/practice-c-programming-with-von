#include<stdio.h>
#define PI 3.142 //We define CONSTANTS because they do not change through
main(){
	float radius,sArea;
	printf("Enter the radius: ");
	scanf("%f", &radius);
	sArea = 4 * PI * radius * radius;
	(radius>0)?printf("The Surface Area is %0.2f cm.sq",sArea):printf("Invalid radius");
	}
