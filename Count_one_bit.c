#include <stdio.h>
int main(){

	int n;
	int count = 0;
	printf("Enter the number in which you want to count number of ones\n");
	scanf("%d",&n);

	while(n!=0){
	
		n = n&(n-1);
		count++;
	}
	printf("Number of ones in n are: %d \n",count);
}
