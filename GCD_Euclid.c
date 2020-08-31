#include <iostream>
using namespace std;
/*GCD using Euclidian method*/
int gcd(int x, int y){
	int b = x-y;
	if(b!=0){
	  if(b>y)
	  return gcd(b,y);
	  else{
	  	return gcd(y,b);
	  }	
	}
	
	else
	return y;
}
int main(void){
	int n,m;
	cout<<"Enters 2 positive numbers for which you want to find GCD"<<endl;
	cin>>n>>m;
	if(n==0|| m==0){
		printf("Not a valid number, Enter only natural numbers");
		exit(1);
	}
	else if(n>m){
	int result = 	gcd(n,m);
	cout<<result<<endl;
	}
	
	else
	{
	int result=	gcd(m,n);
	cout<<result<<endl;
	}
	printf("Hello World");
}
