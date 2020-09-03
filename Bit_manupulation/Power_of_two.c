#include <stdio.h>

int main(){

	long long int n;
	printf("Enter the number to check if it is power of 2 or not\n");
	scanf("%lld",&n);

	//Solving by bit manupulation
	//Concept by example 8=(1000) in binary 7 = (0111)  bit wise and will result in (0000)
	//and 7 = 0111 and 6 = 0110   and of both is 0110 which is 6 not null
	if((n&n-1)==0){
		printf("Number is power of 2\n");
	}
	else{
	
		printf("Number is not power of two\n");
	}
	return 0;
		

}
