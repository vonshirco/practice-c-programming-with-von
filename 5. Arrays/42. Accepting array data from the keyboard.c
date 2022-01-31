#include <stdio.h>
main(){
	float scores[5];
	//Accepting array data from the keyboard
	printf("Enter score 1: " );
	scanf("%f", &scores[0]);
	printf("Enter score 2: ");
	scanf("%f", &scores[1]);
	printf("Enter score 3: ");
	scanf("%f", &scores[2]);
	
	printf("The score entered are %.1f, %.1f and %.1f", scores[0],scores[1],scores[2]);
}
