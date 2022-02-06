#include<stdio.h>
//Structures and Unions

//Defining a Structure
struct computer
{
	char name[30];
	int stock;
	float price,discount;
};

main(){
	//Initializing the structure and assigning variables to it
	//struct computer c1 = {"Dell Inspiron, Intel Core",35,150,2.32};
	//Or 
	struct computer c1;
	strcpy(c1.name, "Dell Inspiron"); 
	//c1.name = "Dell Inspiron"; //We used strcpy above because in the LHS we used an array type which is not assignable
	c1.stock = 35;
	c1.price = 150;
	c1.discount = 2.32;
	
	printf("Name = %s\n", c1.name);
	printf("Stock = %d\n", c1.stock);
	printf("Price = %.2f\n", c1.price);
	printf("Discount = %.2f\n", c1.discount);
	
}
