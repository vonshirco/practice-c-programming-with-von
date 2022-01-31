#include<stdio.h>

//Defining a function to find age of a person and passing the parameter
int personAge(int birth){
	int birthYear;
	birthYear = 2022 - birth;
	return birthYear;
}

main(){
	int dob, age;
	printf("Enter your year of birth: ");
	scanf("%d", &dob);
	
	//Calling the personAge function and passing an argument
	age = personAge(dob);
	
	printf("The age is %d", age);
	
}

/*The parameter variable "birth" receives an argument of data "dob" passed when the funtion
  was called
  Arguments are also called Actual Parameters
  Parameters are also called Formal Parameters
  */
