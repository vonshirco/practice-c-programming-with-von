#include <stdio.h>

int main(){
    int salary;
	printf("Enter the salary \n");
	scanf("%d",&salary);
	if(salary <= 170000)
		printf("0%%");
	else if(salary > 170000 && salary <= 360000)
		printf("11%%");
	else if(salary > 360000 && salary <= 540000)
		printf("20%%");
	else if(salary > 540000 && salary <= 720000)
		printf("25%%");
	else
		printf("30%%");
}