#include <stdio.h>
int input_numbers(int x){

	int arr[x];
	int i;
	printf("Enter the numbers\n");
	for(i=0;i<x;i++){
		scanf("%d",&arr[i]);
			
	}
	binary_sort(&arr,x);
	for(i=0;i<x;i++){
		printf("%d  ",arr[i]);
	}
	printf("\n");
	return 0;
}


int binary_sort(int *a, int n){
	int i,t,j=1;
	int count =0;

	printf("Hello World: %d\n",a[3]);
	
	//for(j=0;j<n-1;j++){
	while(count==0){

		count = 1;
		for(i=0;i<n-j;i++){
			if(a[i]>a[i+1]){
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
				count = 0;
			}

		}
		/*
		if(count==0){
	
			printf("Sorted!\n");
			exit(1);
		}
		else{
		
			n = n-1;
		}*/
		j++;
	}

	/*for(j=0;j<n;j++){
	
		printf("%d ",a[i]);
	}*/

	return 0;
}
	

int main(){

	int T;

	


	printf("Enter the number of digits which you want to sort\n");
	scanf("%d",&T);
	if(T<=0){
	
		printf("Invalid Input!\n");
		exit(1);
	}
	else{
		input_numbers(T);

	}



	

}
	
