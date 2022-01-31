#include<stdio.h>
main(){
	int age,yob;
	char name [15];
	printf("Enter your name then your year of birth: "); //displays the output to the monitor
	scanf("%s%d",&name,&yob); //Receives the input from the user through the keyboard
	age = 2021 - yob; //Computing age
	printf("Hello %s, you are %d years old",name,age);
}

