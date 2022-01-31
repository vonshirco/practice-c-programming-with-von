#include <stdio.h>
main(){
	//Accepting array from the keyboard by looping
	float scores[5];
	int i;
	
	//Accepting Scores
	for(i=0; i<5; i++){
		printf("Enter score %d: ", i);
		scanf("%f", &scores[i]);
	}
	
	//Showing Scores
	printf("\nThe scores are:\n");
	for(i=0; i<5; i++){
		printf("%.1f\n", scores[i]);
	}
}
