#include<stdio.h>
main(){
	int grAge, brAge; //Declaring varibles
	printf("Enter the Bride's age: ");
	scanf("%d",&brAge);
	printf("Enter the Groom's age: ");
	scanf("%d",&grAge);
	
	(grAge>=brAge)?printf("Normal Condition"):printf("Not Common in Africa");
}
