#include <stdio.h>

int main(){

//Bit Manupulation and bit wise operators
//
	//Not
	//
	//
	/*
	int n = 7;
	int x = ~n;
	//cout<<x<<endl;
	printf("Value of n after negation or NOT: %d",x);
	*/

	//Do And
	/*
	int n = 7;// 7 = 111 
	int m = 2;//2 = 010
	int x = n&m;
	printf("Value after doing bit wise and of m and n is : %d\n",x);
	*/

	//NOR
	/*
	int n = 7; //7 = 111 
        int m = 2; //2 = 010
        int x = n|m;
        printf("Value after doing bit wise Nor  of m and n is : %d\n",x);
	*/
	
	//XOR
	/*
	int n = 7;// 7 = 111 
        int m = 2;//2 = 010
        int x = n^m;
        printf("Value after doing bit wise and of m and n is : %d\n",x);
	*/

	//Right Shift
	int n = 240;// 7 = 111 
        int m = 2;//2 = 010
        int x = n>>m;
        printf("Value after doing Right shift of m and n is : %d\n",x);

	//left Shift
        int n1 = 7;// 7 = 111
        int m1 = 2;//2 = 010
        int x1 = n1<<m1;
        printf("Value after doing Left shif  is : %d\n",x1);




	return 0;


}
	
