#include<stdio.h>
main(){
	int age;
	printf("Enter the Child's Age: ");
	scanf("%d", &age);
	(age<0 || age>10)?printf("WRONG AGE"):printf("VALID AGE");
}
