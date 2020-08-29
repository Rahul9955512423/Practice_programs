#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    string s;
	    cin>>s;
	    int len, count=0;
	    len = s.length();
	   // cout<<len<<endl;
	  
	   int i;
	    for(i=0;i<len;){
	        
	            if(((s[i]=='A')&&(s[i+1]=='B'))||((s[i]=='B')&&(s[i+1]=='A'))){
	                count++;
	            }
	            else{
	                cout<<"no"<<endl;
	                break;
	            }
	             
	            
	 
	        i = i+2;
	    }
	    if((count==(len/2)&&i==len) ){
	        cout<<"yes"<<endl;
	    }
	}
	return 0;
}

