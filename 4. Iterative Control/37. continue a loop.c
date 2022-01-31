#include<stdio.h>
main(){
	int i;

	for(i=11; i<=20; i++){
		if(i%2 == 0) //if the number is even shld be skipped
		continue;
		printf("%d\n",i);
	}
}
