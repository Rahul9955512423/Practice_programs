#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    string s;
	    cin>>s;
	    int len = s.length();
	    //cout<<len<<endl;
	    int count =0;
	    for(int i=0;i<len-1;i++){
	        if(s[i]=='C'){
	            if((s[i+1]=='E')||(s[i+1]=='C')||(s[i+1]=='S')){
	                count++;
	                
	            }
	            
	        }
	        else if(s[i]=='E'){
	            if((s[i+1]=='E')||(s[i+1]=='S')){
	                count++;
	            }
	            else if(s[i+1=='C']){
	                cout<<"no"<<endl;
	                break;
	            }
	        }
	        else if(s[i]=='S'){
	           if((s[i+1]=='C')||(s[i+1]=='E')){
	               cout<<"no"<<endl;
	               break;
	           } 
	           else if(s[i]=='S'){
	               count++;
	           }
	        }
	           
	        
	    }
	    if(count==len-1){
	        cout<<"yes"<<endl;
	    }
	    
	}
	return 0;
}

