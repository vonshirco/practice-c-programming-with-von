#include<stdio.h>
#define salaam "Jiji letu Dar"
main (){

	int i=0;
	
	while(salaam[i]!= '\0'){ //\0 is zero character. In C it is mostly used to indicate the termination of a character string.
	//The purpose of the terminating zero character is to terminate the string
	putchar(salaam[i]); 
		i++;
		
	}
}
