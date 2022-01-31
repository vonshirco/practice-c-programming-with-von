#include<stdio.h>
main(){
	int i,sum=0;
	for(i=0; i<10; i++){
		if(i%2 != 0) //if number is odd
		continue;
		sum = sum + i;	
	}
	printf("The sum is %d\n",sum);
}
