#include <iostream>
#include <cstring>
using namespace std;

void seive(int n){
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	
	for(int p=2;p*p<=n;p++){
		if(prime[2]==true){
			for(int i=p*p;i<=n;i=i+p){
				prime[i]=false;
			}
		}
	}
	
	for(int j=2;j<=n;j++){
		if(prime[j]==true){
			cout<<j<<" ";
		}
	}
}
/* Program to print prime number*/

int main(void){
	int n;
	cout<<"Enter the number upto which you want to print prime number"<<endl;
	cin>>n;
	/*
	for(int i=2;i<n;i++){
		
		int x = i;
		int count =0;
		for(int j=1;j<=x;j++){
			if(x%j==0)
			count++;
		}
		if(count==2){
			cout<<x<<endl;
			//break;
		}
	}*/
	//Method of Seive of Eratosthenes of prime numbers
	
	seive(n);
	
	
}
