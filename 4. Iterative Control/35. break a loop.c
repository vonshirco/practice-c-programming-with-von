#include<stdio.h>
main(){
	int i,sum;
	i = 0;
	for(i=0; i<=10; i++){
		if(i==5)  //Loops end when i reaches 5
		break;
		sum = sum + 1;
	}
	printf("The sum is %d\n",sum);
}
