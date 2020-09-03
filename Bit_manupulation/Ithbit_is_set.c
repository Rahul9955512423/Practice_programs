#include <stdio.h>
#include <stdbool.h>/*This header must be included to use bool data type in c. In c++ no header needs to be included*/
int main(){

	int n,k;
	bool result;
	printf("Enter the number for which you want to check ith bit is set or not\n");
	scanf("%d",&n);
	printf("Enter which bit you want to check to be set\n");
	scanf("%d",&k);
	/*Concept :
	 let say n = 20 = 10100 (in binary)
	 so to check if ith(say 2nd) bit is set we need to do and of 1 with 2nd bit and if and = 1 then it will be set
	 so to do and we need 00100 and then do and 
	 (10100&00100) = 00100

	 so (1<<k=2) will give 00100 (left shifting 1= 0001 by 2 place will give 0100)

	 */
	result = n&(1<<k);

	if(result==true){
		printf("Bit is set\n");
	}
	else{
	
		printf("Bit is not set\n");
	}

	
}
